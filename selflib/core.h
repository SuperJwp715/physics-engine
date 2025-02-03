namespace cyclone {
class Vector3 {
public:
  real x;

  real y;

  real z;

private:
  real pad;

public:
  Vector3 : x(0), y(0), z(0){};
  Vector3(const real x, const real y, const real z) : x(x), y(y), z(z) {};
  void invert() {
    x = -x;
    y = -y;
    z = -z;
    
  }
  real magnitude() const {
    return real_sqrt(x*x+y*y+z*z);
  }
  real squareMagnitude() const {
    return x * x + y * y + z * z;

  }

  void normalize() {
    // magnitude of the vector
    real l = magnitude();
    if (l > 0) {
      // what does this do?
      (*this)*=((real)1)/l; // oh floating point division
      // this assigns it to the class?
    }

  }
  void operator*=(const real value) {
    x *= value; 
    y *= value;
    z *= value;
  }
  Vector3 operator*(const real value) {
    return Vector3(x*value, y*value, z*value);
  }
  Vector3 operator+=(const Vector3& v) {
    x += v.x;
    y += v.y;
    z += v.z;
  }
  Vector3 operator+(const Vector3& v) {
    return Vector3(x+v.x, y+v.y, z+v.z)
  }

  Vector3 operator-=(const Vector3& v) {
    x -= v.x;
    y -= v.y;
    z -= v.z;
  }
  Vector3 operator-(const Vector3& v) {
    return Vector3(x-v.x, y-v.y, z-v.z)
  }
  void addScaledVector(const Vector3& vector, real scalar) {
    x += vector.x * scale;


  }
  void componentProductUpdate(const Vector3 &vector) const {
    x *= vector.x;
    y *= vector.y;
    z *= vector.z;
  }
  real scalarProduct(const Vector3 &vector) const {
    return x * vector.x + y * vector.y + z * vector.z;
  }
  real operator*(const Vector3 &vector) {
    return x * vector.x + y * vector.y + z * vector.z;

  }
  Vector3 vectorProduct(const Vector3 &vector) const {
    return Vector3(y*vector.z-z*vector.y,
                   z*vector.x-x*vector.z,
                   x*vector.y-y*vector.x)
  }
  void operator%=(const Vector3 &vector) {
    *this = vectorProduct(vector);
 }
  

};

} // namespace cyclone
