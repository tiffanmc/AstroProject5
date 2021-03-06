#ifndef VEC3_H
#define VEC3_H
#include <string>
#include <vector>

class Vec3
{
public:
    Vec3();
    Vec3(double x, double y, double z);
    double lengthSquared();
    double length();

    // Actions
    void zeros();
    Vec3 cross(Vec3 otherVector);
    double dot(Vec3 otherVector);
    void normalize();
    Vec3 normalized();

    // Getters and setters
    double x() const { return components[0]; }
    double y() const { return components[1]; }
    double z() const { return components[2]; }
    void setX(double x) { components[0] = x; }
    void setY(double y) { components[1] = y; }
    void setZ(double z) { components[2] = z; }

    // Convenience functions
    void print();
    void print(std::string name);
    friend std::ostream& operator<<(std::ostream& os, const Vec3& myVector); // Allows cout << myVector << endl;

    // Operators
    double &operator()(int index) { return components[index]; } // Allows access like myVector(0)
    double &operator[](int index) { return components[index]; } // Allows access like myVector[0]
    Vec3 &operator+=(double rhs); // Componentwise addition with scalar
    Vec3 &operator+=(Vec3 rhs);   // Componentwise addition with vector
    Vec3 &operator*=(double rhs); // Componentwise multiplication with scalar
    Vec3 &operator*=(Vec3 rhs);   // Componentwise multiplicationwith vector
    Vec3 &operator-=(double rhs); // Componentwise subtraction with scalar
    Vec3 &operator-=(Vec3 rhs);   // Componentwise subtraction with vector
    Vec3 &operator/=(double rhs); // Componentwise division with scalar
    Vec3 &operator/=(Vec3 rhs);   // Componentwise division with vector
private:
    double components[3];
};

inline Vec3 operator+(Vec3 lhs, double rhs) {
    lhs += rhs;
    return lhs;
}

inline Vec3 operator+(double lhs, Vec3 rhs) {
    rhs += lhs;
    return rhs;
}

inline Vec3 operator+(Vec3 lhs, Vec3 rhs) {
    lhs += rhs;
    return lhs;
}

inline Vec3 operator-(Vec3 lhs, double rhs) {
    lhs -= rhs;
    return lhs;
}

inline Vec3 operator-(double lhs, Vec3 rhs) {
    rhs -= lhs;
    return rhs;
}

inline Vec3 operator-(Vec3 lhs, Vec3 rhs) {
    lhs -= rhs;
    return lhs;
}


inline Vec3 operator*(Vec3 lhs, double rhs) {
    lhs *= rhs;
    return lhs;
}

inline Vec3 operator*(double lhs, Vec3 rhs) {
    rhs *= lhs;
    return rhs;
}

inline Vec3 operator*(Vec3 lhs, Vec3 rhs) {
    lhs *= rhs;
    return lhs;
}


inline Vec3 operator/(Vec3 lhs, double rhs) {
    lhs /= rhs;
    return lhs;
}

inline Vec3 operator/(double lhs, Vec3 rhs) {
    rhs /= lhs;
    return rhs;
}

inline Vec3 operator/(Vec3 lhs, Vec3 rhs) {
    lhs /= rhs;
    return lhs;
}

#endif // VEC3_H
