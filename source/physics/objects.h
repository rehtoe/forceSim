///     objects.h
#include "../maths/vector3d.h"

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
                    acceleration(Vector3d()), charge(0.0),mass(0.0);
    //  METHODS

    //  OPERATOR OVERLOADS
};