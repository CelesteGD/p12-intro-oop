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

#include "clase_fecha.h"

bool Usage(const int argc, char *argv[]) {
  if (argc != 1) {
    std::cout << "Ha utilizado un número incorrecto de parámetros\n";
    std::cout << "Modo de uso: " << argv[0] << std::endl;
    return false;
  }
  return true;
}

int main(const int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }
// Declarar e inicializar fechas
  Fecha fecha1(12, 22, 2022);
  Fecha fecha2(30, 2, 2023);  // Esta fecha generará un error

  // Mostrar las fechas
  std::cout << "Fecha 1: ";
  fecha1.MostrarFecha();

  std::cout << "Fecha 2: ";
  // No se imprimirá ya que la creación de la fecha2 generará un error

  return 0;
}
