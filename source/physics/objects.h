///     objects.h
#include "../maths/vector3d.h"

///   PhysicsObject
class PhysicsObject{
  private:
    //  PROPERTIES
    Vector3d position, velocity, acceleration;
    double mass, charge;
  public:
    //  CONSTRUCTORS
    PhysicsObject(): position(Vector3d()), velocity(Vector3d()),
                    acceleration(Vector3d()), charge(0.0),mass(0.0){};
    //  METHODS
    const Vector3d& get_position();
    const Vector3d& get_velocity();
    const Vector3d& get_acceleration();
    const double& get_mass();
    const double& get_charge();
    void set_position(double _x, double _y, double _z);
    void set_velocity(double _x, double _y, double _z);
    void set_acceleration(double _x, double _y, double _z);
    void set_position(Vector3d newVec);
    void set_velocity(Vector3d newVec);
    void set_acceleration(Vector3d newVec);
    void set_mass(double newMass);
    void set_charge(double newCharge);
    //  OPERATOR OVERLOADS
};