///     sim.h

struct Simulation_Properties{
    //      PROPERTIES
    /* macro/size or scope variable, groups/clusters, individual charges/circutis */
    int frames_per_second = 30;
    float time_scale = 1.0; // speed multi
    std::pair<int,int> resolution {1920,1080};

    //      CONSTRUCTORS
    Simulation_Properties();
    //      METHODS
};
template<int DIMENSIONS = 3>
class Simulation{
  private:
    //      PROPERTIES
    Simulation_Properties properties;
  public:
    //      CONSTRUCTORS
    Simulation();
    //      METHODS
    Simulation_Properties& get_sim_properties();
};