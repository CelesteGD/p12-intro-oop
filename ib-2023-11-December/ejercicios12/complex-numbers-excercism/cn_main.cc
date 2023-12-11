/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 11 Dec 2023
 * @contact alu0101648361@ull.edu.es
 * @brief main function of our program
 */

#include "class_cn.h"

int main() {
  // Crear objetos Complex
  Complex complex1(2.0, 3.0);
  Complex complex2(1.0, -2.0);

  // Realizar operaciones
  Complex sum = complex1 + complex2;
  Complex difference = complex1 - complex2;
  Complex product = complex1 * complex2;
  Complex quotient = complex1 / complex2;

  // Mostrar resultados
  std::cout << "Suma: ";
  sum.Show();
  std::cout << std::endl;

  std::cout << "Diferencia: ";
  difference.Show();
  std::cout << std::endl;

  std::cout << "Producto: ";
  product.Show();
  std::cout << std::endl;

  std::cout << "Cociente: ";
  quotient.Show();
  std::cout << std::endl;

  // Verificar igualdad
  if (complex1 == complex2) {
      std::cout << "Los números complejos son iguales." << std::endl;
  } else {
      std::cout << "Los números complejos son diferentes." << std::endl;
  }

  return 0;
}

