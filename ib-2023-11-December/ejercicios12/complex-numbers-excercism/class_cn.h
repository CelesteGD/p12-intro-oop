/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Celeste González Díaz
 * @date 11 Dec 2023
 * @contact alu0101648361@ull.edu.es
 * @brief declaration of our functions
 */

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
private:
  double real;
  double imag;

public:
  Complex(double real, double imag);

  double real_part() const;
  double imag_part() const;

  // Sobrecarga de operadores
  Complex operator+(const Complex& other) const;
  Complex operator-(const Complex& other) const;
  Complex operator*(const Complex& other) const;
  Complex operator/(const Complex& other) const;
  bool operator==(const Complex& other) const;
  bool operator!=(const Complex& other) const;

  // Método para mostrar el número complejo
  void Show() const;
};

#endif  // COMPLEX_H

