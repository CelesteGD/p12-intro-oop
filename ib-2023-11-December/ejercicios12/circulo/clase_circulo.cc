/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 11 Dec 2023
 * @contact alu0101648361@ull.edu.es
 * @brief functions that we will use in our main
 */

#include "clase_circulo.h"

// Constructor
Circulo::Circulo(double xCentro, double yCentro, double radio, Color color)
  : xCentro_(xCentro), yCentro_(yCentro), radio_(radio), color(color) {}

// Método para calcular el área del círculo
double Circulo::Area() const {
  return M_PI * radio_ * radio_;
}

// Método para calcular el perímetro del círculo
double Circulo::Perimetro() const {
  return 2.0 * M_PI * radio_;
}

// Método para imprimir la información del círculo
void Circulo::Print() const {
  std::cout << "Centro: (" << xCentro_ << ", " << yCentro_ << ")\n";
  std::cout << "Radio: " << radio_ << "\n";
  std::cout << "Color: ";
  switch (color) {
    case ROJO:
      std::cout << "Rojo\n";
      break;
    case VERDE:
      std::cout << "Verde\n";
      break;
    case AZUL:
      std::cout << "Azul\n";
      break;
    case AMARILLO:
      std::cout << "Amarillo\n";
      break;
    case OTRO:
      std::cout << "Otro\n";
      break;
  }
}

// Método para determinar si un punto está dentro del círculo
bool Circulo::EsInterior(double x, double y) const {
  double distanciaCentroPunto = std::sqrt((x - xCentro_) * (x - xCentro_) + (y - yCentro_) * (y - yCentro_));
  return distanciaCentroPunto <= radio_;
}

