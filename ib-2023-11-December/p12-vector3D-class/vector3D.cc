/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Vector3D class Implementation
 */

#include <iostream>
#include <cmath>

#include "vector3D.h"

/**
 * @brief Displays the given vector.
 *        Overloading the insertion (<<) operator
 * @param[in] output: The output stream where text is inserted
 * @param[in] kVector: constant reference to the vector to print
 * @return the output.
 */
std::ostream& operator<<(std::ostream& output, const Vector3D& vector) {
  output << '(' << vector.x_position() << ", " << vector.y_position() << ", " << vector.z_position() << ")\n";
  return output;
}


  const double kEscalarFactor = 3.5;
  multiplied_vector = vector1.MultiplyVector(kEscalarFactor);  // Multiplica el vector por el escalar

  double vector_module{vector1.Module()};
  
  
  Vector3D sum_vector;
  sum_vector = vector1 + vector2;
  
  
  double scalar_product = vector1 * vector2; 
