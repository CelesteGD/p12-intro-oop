/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Vector3D class Definition
 */

#ifndef VECTOR3D_H
#define VECTOR3D_H

/** @brief Class Vector3D */
class Vector3D {
  private:
    double x_;
    double y_;
    double z_;
  public:
    Vector3D() : x_{0.0}, y_{0.0}, z_{0.0} {}
    // 3 Getters:
    double x_position() const { return x_; } 
    double y_position() const { return y_; }
    double z_position() const { return z_; }

    Vector3D operator* (const Vector3D&) const;
};

std::ostream& operator<<(std::ostream& kOutput, const Vector3D& vector1);


#endif
