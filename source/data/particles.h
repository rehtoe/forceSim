///     particles.h
#include "../maths/vector3d.h"
#include "../physics/objects.h"

enum class ParticleType{
    None = -99,
    Electron = -1,
    Neutron = 0,
    Proton = 1,
};

struct ParticleProperties{
    //    PROPERTIES
    bool EffectGravity;
    bool EffectElectromagnetic;
    bool EffectStrongNuclear;
    bool EffectWeakNuclear;
    double mass; // in kg
    double charge; // in C
    int baryonNumber;
    int leptonNumber;
    //    CONSTRUCTORS
    ParticleProperties();
    //    METHODS
    void setup_particle(ParticleType particle_type);
    //    OPERATOR OVERLOADS
};

template<int DIMENSIONS = 3>
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
    ParticleProperties properties;
    //  CONSTRUCTOR
    Particle<DIMENSIONS>(): type(ParticleType::None), properties(ParticleProperties());
    Particle<DIMENSIONS>(ParticleType ptype): type(ptype), properties(ParticleProperties());
    //  METHODS
};