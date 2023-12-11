/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F de Sande
 * @date Dec 16 2022
 * @brief Client program to work with the vector3D class
 */

#include <iostream>
#include "vector3D.h"

int main() {
  Vector3D vector1{};
  std::cout << "First vector: " << vector1;
  Vector3D vector2{1.0, 2, 3};
  std::cout << "Second vector: " << vector2;
  std::cout << "Multiplied Vector: " << multiplied_vector;
  std::cout << "Module of the first vector: " << vector_module << std::endl;
  std::cout << "Sum of the two vectors: " << sum_vector;
  std::cout << "Scalar product of both vectors: " << scalar_product << std::endl;
  return 0;
}

