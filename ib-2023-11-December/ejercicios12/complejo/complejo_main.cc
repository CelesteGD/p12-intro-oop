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

#include "clase_complejo.h"

bool Usage(const int argc, char *argv[]) {
  if (argc != 1) {
    std::cout << "Ha utilizado un número incorrecto de parámetros\n";
    std::cout << "Modo de uso: " << argv[0] << std::endl;
    std::cout << "Hará la suma y la resta de 2 + 5i y 4 -8i" << std::endl;
    std::cout << "También hará que el usuario introduzca un número para imprimirlo en pantalla" << std::endl;
    return false;
  }
  return true;
}

int main(const int argc, char* argv[]) {
  if (!Usage(argc, argv)) {
    return 1;
  }

  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;

  resultado = complejo1 + complejo2;
  std::cout << "Suma: " << resultado << std::endl;

  resultado = complejo1 - complejo2;
  std::cout << "Resta: " << resultado << std::endl;

  Complejo complejo3;
    std::cin >> complejo3;
    std::cout << "Número complejo introducido: " << complejo3 << std::endl;

  return 0;
}
