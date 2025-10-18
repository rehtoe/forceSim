///     objects.h
#include "../maths/vector3d.h"

///   PhysicsObject
class PhysicsObject{
  private:
    //  PROPERTIES
    Vector3d position;
    Vector3d velocity;
    Vector3d acceleration;
    double charge;
    double mass;
  public:
    //  CONSTRUCTORS
    PhysicsObject(): position(Vector3d()), velocity(Vector3d()),
                    acceleration(Vector3d()), charge(0.0),mass(0.0){};
    //  METHODS
    void set_position(double _x, double _y, double _z);
    void set_velocity(double _x, double _y, double _z);
    void set_acceleration(double _x, double _y, double _z);
    void set_position(Vector3d newVec);
    void set_velocity(Vector3d newVec);
    void set_acceleration(Vector3d newVec);
    void set_mass(double newMass);
    void set_charge(double newCharge);
    Vector3d get_position();
    Vector3d get_velocity();
    Vector3d get_acceleration();
    double get_mass();
    double get_charge();
    //  OPERATOR OVERLOADS
};