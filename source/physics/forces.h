///     forces.h
#include "../maths/vector3d.h"
#include "objects.h"
#include "../data/atoms.h"
#include "../data/particles.h"

#include <iostream>

/*
  FORCES:           RANGE:          COMMON PARTICLE AFFECTED
  GRAVITY:          inf             neutron, proton, electron, neutrino, photon
  ELECTROMAGNETIC:  inf             proton, electron, photon
  STRONG NUCLEAR:   ~10e-14 m       neutron, proton
  WEAK NUCLEAR:     ~10e-15 m       neutron, proton, electron, neutrino
*/
enum class ForceType{
    Gravitational,
    Electric,
    Weak_Nuclear,
    Strong_Nuclear
};


class Force{
  private: //       PRIVATE
    //  PROPERTIES
    Vector direction; //  position vector from point force is exerted on
    PhysicsObject* tail; //   first PhysicsObject, tail end of vector
    PhysicsObject* arrow; //  second PhysicsObject, arrow end of vector
    //    mutable allows it to be changing variable whilst being used by const functions
    mutable bool chx_con; //    changed conditions, ie force has been exerted/stepped, change in objects
    mutable double force_magnitude;   //    magnitude of force, cache, used for const reference getter
    mutable Vector3d force_vector;
    //  METHODS
    void update_direction(); // chx_con false, when changing objects or stepping/exerting forces
    //  also has no base class or derivation as all forces should have a type or inherited scopes
    virtual void calculate_force() = 0; //  calculates the force_vec and mag
    virtual void update_objects(); // chx_con false, uses force_vec to move objects
  public: //        PUBLLIC
    //  CONSTRUCTORS
    Force():direction(Vector3d(0.0,0.0,0.0)),tail(nullptr),arrow(nullptr){};
    //  METHODS
    const double& get_force_magnitude() const;
    const Vector3d& get_force_vector() const;
    const Vector3d& get_direction() const;
    const PhysicsObject& get_start_object() const;
    const PhysicsObject& get_end_object() const;
    void change_start_object(PhysicsObject* new_object); // chx_con false
    void change_end_object(PhysicsObject* new_object); // chx_con false
    void change_objects(PhysicsObject* new_tail, PhysicsObject* new_arrow);
    void step(double dt); // chx_con false

};

class GravitationalForce: public Force{
    //  PROPERTIES
    //  CONSTRUCTORS
    GravitationalForce();
    //  METHODS
};
class ElectricForce: public Force{
    //  PROPERTIES
    //  CONSTRUCTORS
    ElectricForce();
    //  METHODS
};
class WeakNuclearForce: public Force{
    //  PROPERTIES

    //  CONSTRUCTORS
    WeakNuclearForce();
    //  METHODS
};
class StrongNuclearForce: public Force{
    //  PROPERTIES
    //  CONSTRUCTORS
    StrongNuclearForce();
    //  METHODS
};