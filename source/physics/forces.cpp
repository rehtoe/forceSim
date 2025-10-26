///     forces.cpp

///     Force 
void Force::update_direction(){
    chx_con = false;
    if(tail && arrow){
        dx = arrow->get_position().x - tail->get_position().x;
        dy = arrow->get_position().y - tail->get_position().y;
        dz = arrow->get_position().z - tail->get_position().z;
        direction = Vector3d(dx,dy,dz);
    } 
}
void Force::calculate_force(double timestep_pass){
    update_direction();
}
void Force::update_objects(double timestep){
    /* acceleratio calculation etc */
}
const double& Force::get_force_magnitude() const{
    if(!chx_con){ calculate_force(); }
    return force_magnitude;
}
const Vector<DIMENSIONS>& Force::get_force_vector() const { 
    if(!chx_con){ calculate_force(); }
    return force_vector; 
}
const Vector<DIMENSIONS>& Force::get_direction() const{ return direction; }
const PhysicsObject& Force::get_start_object() const {
    if(!tail){ throw std::runtime_error("No start object set"); }
    return *tail;
}
const PhysicsObject& Force::get_end_object() const { 
    if(!arrow){ throw std::runtime_error("No end object set");
    return *arrow;
}
void Force::change_start_object(PhysicsObject* new_object){ 
    chx_con = false; 
    tail = new_object;
    update_direction();
}
void Force::change_end_object(PhysicsObject* new_object){
    chx_con = false; 
    arrow = new_object; 
    update_direction();
}
void Force::change_objects(PhysicsObject* new_tail, PhysicsObject* new_arrow){ 
    chx_con = false; 
    tail = new_tail; 
    arrow = new_arrow; 
    update_direction(); 
}
void Force::step(double dt){
    if(dt<0) { return; }
    calculate_force();
    update_objects();
    chx_con = true;
}
