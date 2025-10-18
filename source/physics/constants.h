///     constants.h
#include <limits>

///     USAGE
static constexpr double VARIABLE_NAME = 123456789.0;

///     FORCE RANGES
static constexpr double RANGE_GRAVITATIONAL = std::numeric_limits<double>::infinity(); //      inf
static constexpr double RANGE_ELECTROMAGNETIC = NULL; //    inf
static constexpr double RANGE_STRONG_NUCLEAR = 10e-14; //   meters
static constexpr double RANGE_WEAK_NUCLEAR = 10e-15; //     meters

///     MISC
static constexpr double SPEED_OF_LIGHT = 299792458.0; // [m/s], meters/second, 'c'
static constexpr double ELEMENTARY_CHARGE = 1.602176634e-19; // [C], Coulombs, 'e'
static constexpr double GRAVITATIONAL_CONSTANT = 6.67408; // [Nm^2/kg^2], Newton*meters^2/kilograms^2, 'G', (31) uncertainties in last decimals
static constexpr double AVOGADROS_NUMBER = 6.02214076e23; // [mol^-1], 1/mol, ''
static constexpr double BLACHS_CONSTANT = ; //

///     SUB-ATOMIC PARTICLES
//              REST MASS
//              CONSERVED FOR:      GRAIVTATIONAL FORCE
//              electron volts are units of energy, can use E = m*c^2 and do m = E/c^2
//              divide these values by the speed of light squared to find mass in kilograms
static constexpr double EVOLT_PROTON = 938.3e6; //   MeV/c^2 
static constexpr double EVOLT_NEUTRON = 939.6e6; //  MeV/c^2
static constexpr double EVOLT_ELECTRON = 0.511e6; // MeV/c^2
static constexpr double EVOLT_NEUTRINO = 1.0; //eV/c^2
static constexpr double EVOLT_PHOTON = 0.0; //  eV/c^2
//              CHARGE^22       ??? CHECK PAPER W/ PROFESSOR
//              CONSERVED FOR:      ELECTROMAGNETIC FORCE
static constexpr double CHARGE_PROTON = 1.0 * ELEMENTARY_CHARGE;
static constexpr double CHARGE_NEUTRON = 0.0;
static constexpr double CHARGE_ELECTRON = -1.0 * ELEMENTARY_CHARGE;
static constexpr double CHARGE_NEUTRINO = 0.0;
static constexpr double CHARGE_PHOTON = 0.0;
//              BARYON NUMBERS
//              CONSERVED FOR:      STRONG NUCLEAR FORCE
static constexpr double BARYON_PROTON = 1;
static constexpr double BARYON_NEUTRON = 1;
static constexpr double BARYON_ELECTRON = 0;
static constexpr double BARYON_NEUTRINO = 0;
static constexpr double BARYON_PHOTON = 0;
//              LEPON NUMBERS 
//              CONSERVED FOR:      WEAK NUCLEAR FORCE
static constexpr double LEPTON_PROTON = 0;
static constexpr double LEPTON_NEUTRON = 0;
static constexpr double LEPTON_ELECTRON = 1;
static constexpr double LEPTON_NEUTRINO = 1;
static constexpr double LEPTON_PHOTON = 0;

//      ATOMIC PARTICLES
static constexpr

//      MOLECULES

//      MIXTURES
