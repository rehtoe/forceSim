///     objects.cpp

///   PhysicsObject
void PhysicsObject::set_position(double _x, double _y, double _z){ position = Vector3d(_x,_y,_z); }
void PhysicsObject::set_velocity(double _x, double _y, double _z){ velocity = Vector3d(_x,_y,_z); }
void PhysicsObject::set_acceleration(double _x, double _y, double _z){ acceleration = Vector3d(_x,_y,_z); }
void PhysicsObject::set_position(Vector3d new_position){ position = new_position; }
void PhysicsObject::set_velocity(Vector3d new_velocity){ velocity = new_velocity; }
void PhysicsObject::set_acceleration(Vector3d new_acceleration){ acceleration = new_acceleration; }
void PhysicsObject::set_mass(double new_mass){ mass = new_mass; }
void PhysicsObject::set_charge(double new_charge){ charge = new_charge; }
Vector3d PhysicsObject::get_position(){ return position; }
Vector3d PhysicsObject::get_velocity(){ return velocity; }
Vector3d PhysicsObject::get_acceleration(){ return acceleration; }
double PhysicsObject::get_mass(){ return mass; }
double PhysicsObject::get_charge(){ return charge; }