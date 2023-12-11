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

#include "clase_circulo.h"

bool Usage(const int argc, char *argv[]) {
  if (argc != 1) {
    std::cout << "Ha utilizado un número incorrecto de parámetros\n";
    std::cout << "Modo de uso: " << argv[0] << std::endl;
    std::cout << "Calcula al área, perímetro, color y si un punto está en el círculo" << std::endl;
    return false;
  }
  return true;
}

int main(const int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }

Circulo circulo(0.0, 0.0, 5.0, ROJO);

  // Imprimir información del círculo
  std::cout << "Información del círculo:\n";
  circulo.Print();

  // Calcular y mostrar el área y el perímetro del círculo
  std::cout << "Área del círculo: " << circulo.Area() << "\n";
  std::cout << "Perímetro del círculo: " << circulo.Perimetro() << "\n";

  // Verificar si un punto está dentro del círculo
  double xPunto = 3.0;
  double yPunto = 4.0;
  if (circulo.EsInterior(xPunto, yPunto)) {
      std::cout << "(" << xPunto << ", " << yPunto << ") está dentro del círculo.\n";
  } else {
      std::cout << "(" << xPunto << ", " << yPunto << ") está fuera del círculo.\n";
  }

  return 0;
}
