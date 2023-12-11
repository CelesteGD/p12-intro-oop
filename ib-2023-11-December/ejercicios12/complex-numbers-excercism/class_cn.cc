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

#include "class_cn.h"
#include <cmath>

Complex::Complex(double real, double imag) : real(real), imag(imag) {}

double Complex::real_part() const {
  return real;
}

double Complex::imag_part() const {
  return imag;
}

Complex Complex::operator+(const Complex& other) const {
  return Complex(real + other.real, imag + other.imag);
}

Complex Complex::operator-(const Complex& other) const {
  return Complex(real - other.real, imag - other.imag);
}

Complex Complex::operator*(const Complex& other) const {
  return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
}

Complex Complex::operator/(const Complex& other) const {
  double denominator = other.real * other.real + other.imag * other.imag;
  return Complex((real * other.real + imag * other.imag) / denominator,
                   (imag * other.real - real * other.imag) / denominator);
}

bool Complex::operator==(const Complex& other) const {
  return real == other.real && imag == other.imag;
}

bool Complex::operator!=(const Complex& other) const {
  return !(*this == other);
}

void Complex::Show() const {
  std::cout << real << " + " << imag << "i";
}

