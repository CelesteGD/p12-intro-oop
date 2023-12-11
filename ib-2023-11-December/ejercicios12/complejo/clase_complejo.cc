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

#include "clase_complejo.h"

Complejo::Complejo() : real_(0.0), imaginario_(0.0) {}

Complejo::Complejo(double real, double imaginario) : real_(real), imaginario_(imaginario) {}

Complejo Complejo::operator+(const Complejo& otro) const {
  return Complejo(real_ + otro.real_, imaginario_ + otro.imaginario_);
}

Complejo Complejo::operator-(const Complejo& otro) const {
  return Complejo(real_ - otro.real_, imaginario_ - otro.imaginario_);
}

std::ostream& operator<<(std::ostream& os, const Complejo& complejo) {
  os << complejo.real_ << " + " << complejo.imaginario_ << "i";
  return os;
}

std::istream& operator>>(std::istream& is, Complejo& complejo) {
  std::cout << "Introduzca la parte real: ";
  is >> complejo.real_;
  std::cout << "Introduzca la parte imaginaria: ";
  is >> complejo.imaginario_;
  return is;
}
