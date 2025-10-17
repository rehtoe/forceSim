///     vector3d.h

class Vector3d{
    //  PROPERTIES
    double x;
    double y;
    double z;

    //  CONSTRUCTORS
    Vector3D():x(0.0),y(0.0),z(0.0);
    Vector3D(double X, double Y, double Z):x(X),y(Y),z(Z);

    //  METHODS
    double magnitude() const;
    Vector3D normalize() const;
    double div() const;
    Vector3D curl() const;

    //  OPERATOR OVERLOADS
    Vector3D operator+(const Vector3D& other) const;
    Vector3D operator-(const Vector3D& other) const;
    Vector3D operator*(double scalar) const;
    Vector3D operator/(double scalar) const;
};