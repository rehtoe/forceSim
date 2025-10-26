///     vector3d.h
#include <cmath>  //        std::sqrt
#include <stdexcept>  //    For std::out_of_range

template<int DIMENSIONS>
class Vector{
    //  PROPERTIES
    double components[DIMENSIONS] = {0};
  public:
  //  CONSTRUCTORS
    template<typename... Args>
    Vector(Args... args) { 
        double values[] = {args...};  // Pack expansion
        int count = sizeof...(Args);
        int limit = std::min(count, DIMENSIONS);
        for(int i = 0; i < limit; i++) { components[i] = values[i]; }
    }

  //  METHODS
    double magnitude() const {
        double sum = 0.0;
        for(auto &dub:components){ sum += dub*dub; }
        return std::sqrt(sum);
    }   
    Vector<DIMENSIONS> normalize() const {
        double ph_mag = magnitude();
        if(ph_mag == 0) { return Vector<DIMENSIONS>(); }
        Vector<DIMENSIONS> phvec;
        for(int i = 0; i < DIMENSIONS; i++){
            phvec.set_component(i,components[i] / ph_mag);
        }
        return phvec;
    }
    double dot(const Vector& other) const {
        double result = 0.0;
        for(int i = 0; i < DIMENSIONS; i++) {
            result += components[i] * other.components[i];
        }
        return result;
    }
    const auto& get_components() const { return components; }
    double& get_component(int comp_index) {
        if(comp_index >= DIMENSIONS){ throw std::out_of_range("Component index out of range"); }
        return components[comp_index];
    }
    void set_component(int position, double new_value){
        if(position >= DIMENSIONS){ throw std::out_of_range("Component index out of range"); }
        components[position] = new_value;
    }
  //  OPERATOR OVERLOADS
    Vector<DIMENSIONS> operator+(const Vector& other) const {
        Vector<DIMENSIONS> result;
        const auto& comps = get_components();  // One reference
        const auto& other_comps = other.get_components();  // One reference  
        for(int i = 0; i < DIMENSIONS; i++){
            result.set_component(i, (comps[i] + other_comps[i]));
        }
        return result;
    }
    Vector<DIMENSIONS>& operator+=(const Vector<DIMENSIONS>& other) {
        const auto& other_comps = other.get_components();  // Use getter
        for (int i = 0; i < DIMENSIONS; ++i) {
            components[i] += other_comps.components[i];
        }
        return *this;
    }
    Vector<DIMENSIONS> operator-(const Vector& other) const {
        Vector<DIMENSIONS> result;
        const auto& comps = get_components();  // One reference
        const auto& other_comps = other.get_components();  // One reference  
        for(int i = 0; i < DIMENSIONS; i++){
            result.set_component(i, (comps[i] - other_comps[i]));
        }
        return result;
    }
    Vector<DIMENSIONS>& operator-=(const Vector<DIMENSIONS>& other) {
        const auto& other_comps = other.get_components();  // Use getter
        for (int i = 0; i < DIMENSIONS; ++i) {
            components[i] -= other_comps.components[i];
        }
        return *this;
    }
    Vector<DIMENSIONS> operator*(double scalar) const {
        Vector<DIMENSIONS> result;
        const auto& comps = get_components();  // One reference
        for(int i = 0; i < DIMENSIONS; i++){
            result.set_component(i,(comps[i] * scalar));
        }
        return result;
    }
    Vector<DIMENSIONS>& operator*=(double scalar) {
        for (int i = 0; i < DIMENSIONS; ++i) {
            components[i] *= scalar;
        }
        return *this;
    }
    Vector<DIMENSIONS> operator/(double scalar) const {
        Vector<DIMENSIONS> result;
        const auto& comps = get_components();  // One reference
        for(int i = 0; i < DIMENSIONS; i++){
            result.set_component(i,(comps[i] / scalar));
        }
        return result;
    }
    Vector<DIMENSIONS>& operator/=(double scalar) {
        for (int i = 0; i < DIMENSIONS; ++i) {
            components[i] /= scalar;
        }
        return *this;
    }
    
};
