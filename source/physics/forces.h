///     forces.h
#include "../maths/vector3d.h"
#include "../data/atoms.h"
#include "../data/particles.h"

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
    //  PROPERTIES
    Vector3d direction; //  position vector from point force is exerted on
    Particle tail; //   first particle, tail end of vector
    Particle arrow; //  second particle, arrow end of vector
    //  CONSTRUCTORS
    Force();
    //  METHODS
    virtual double magnitude() const;

};

class GravitationalForce:Force{
    //  PROPERTIES
    //  CONSTRUCTORS
    GravitationalForce();
    //  METHODS
};
class ElectricForce:Force{
    //  PROPERTIES
    //  CONSTRUCTORS
    ElectricForce();
    //  METHODS
    double magnitude() const;
};
class WeakNuclearForce:Force{
    //  PROPERTIES

    //  CONSTRUCTORS
    WeakNuclearForce();
    //  METHODS
};
class StrongNuclearForce:Force{
    //  PROPERTIES
    //  CONSTRUCTORS
    StrongNuclearForce();
    //  METHODS
};