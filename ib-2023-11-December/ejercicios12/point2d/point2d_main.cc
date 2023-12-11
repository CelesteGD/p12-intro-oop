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

#include "clase_point2d.h"

bool Usage(const int argc, char *argv[]) {
  if (argc != 1) {
    std::cout << "Ha utilizado un número incorrecto de parámetros\n";
    std::cout << "Modo de uso: " << argv[0] << std::endl;
    std::cout << "Usará el punto 1,2 y el putno 4,6" << std::endl;
    return false;
  }
  return true;
}

int main(const int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }
 // Crear dos puntos
  Point2D punto1(1.0, 2.0);
  Point2D punto2(4.0, 6.0);

  // Mostrar las coordenadas de los puntos
  std::cout << "Punto 1: ";
  punto1.Show();
  std::cout << std::endl;

  std::cout << "Punto 2: ";
  punto2.Show();
  std::cout << std::endl;

  // Calcular y mostrar la distancia entre los puntos
  double distancia = punto1.Distance(punto2);
  std::cout << "Distancia entre los puntos: " << distancia << std::endl;

  // Calcular y mostrar el punto medio
  Point2D puntoMedio = punto1.Middle(punto2);
  std::cout << "Punto medio: ";
  puntoMedio.Show();
  std::cout << std::endl;

  // Mover el primer punto y mostrar las nuevas coordenadas
  punto1.Move(3.0, 5.0);
  std::cout << "Después de mover el punto 1: ";
  punto1.Show();
  std::cout << std::endl;

  return 0;
}

