///     particles.h
#include "../maths/vector3d.h"
#include "../physics/objects.h"

void initref_particles(){

}

enum class ParticleType{
    None = -99,
    Electron = -1
    Neutron = 0,
    Proton = 1,
};

class Particle : public PhysicsObject{
  public:
    //  PROPERTIES
    /*  PhysicsObject()   -called in inheritance
    Vector3d position;
    Vector3d velocity;
    Vector3d acceleration;
    double charge;
    double mass;
    */
    ParticleType type;
    //  CONSTRUCTOR
    Particle(): type(ParticleType(-99));
    Particle(ParticleType ptype): type(ptype0);
    //  METHODS
};