///     objects.h
#include "../maths/vector.h"

template<int DIMENSIONS = 3>
struct Physics_Properties{
    //    PROPERTIES
    Vector<DIMENSIONS> position;
    Vector<DIMENSIONS> velocity;
    Vector<DIMENSIONS> acceleration;
    double mass;
    double charge;
    //    CONSTRUCTORS
    Physics_Properties(): position(Vector<DIMENSIONS>()),
                          velocity(Vector<DIMENSIONS>()),
                          acceleration(Vector<DIMENSIONS>()),
                          mass(0.0), charge(0.0) {  } ;
    //    METHODS
};

///   PhysicsObject
template<int DIMENSIONS = 3>
class PhysicsObject{
  private:
    //  PROPERTIES
    Physics_Properties<DIMENSIONS> physics_properties;
  public:
    //  CONSTRUCTORS
    PhysicsObject(): physics_properties(Physics_Properties<DIMENSIONS>()) {};
    //  METHODS
    const Vector<DIMENSIONS>& get_position() const { return physics_properties.position; }
    const Vector<DIMENSIONS>& get_velocity() const { return physics_properties.velocity; }
    const Vector<DIMENSIONS>& get_acceleration() const { return physics_properties.acceleration; }
    double get_mass() const { return physics_properties.mass; }
    double get_charge() const { return physics_properties.charge; }
    template<typename... Args>
    PhysicsObject& set_position(Args... args){ physics_properties.position = Vector<DIMENSIONS>(args...); return *this; }
    template<typename... Args>
    PhysicsObject& set_velocity(Args... args){ physics_properties.velocity = Vector<DIMENSIONS>(args...); return *this; }
    template<typename... Args>
    PhysicsObject& set_acceleration(Args... args){ physics_properties.acceleration = Vector<DIMENSIONS>(args...); return *this; }
    PhysicsObject& set_position(const Vector<DIMENSIONS> newVec){ physics_properties.position = newVec; return *this; }
    PhysicsObject& set_velocity(const Vector<DIMENSIONS> newVec){ physics_properties.velocity = newVec; return *this; }
    PhysicsObject& set_acceleration(const Vector<DIMENSIONS> newVec){ physics_properties.acceleration = newVec; return *this; }
    PhysicsObject& set_mass(double new_mass) { physics_properties.mass = new_mass; return *this; }
    PhysicsObject& set_charge(double new_charge) { physics_properties.charge = new_charge; return *this; }
    //  OPERATOR OVERLOADS
};