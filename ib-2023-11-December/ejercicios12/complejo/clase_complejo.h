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

#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>

class Complejo {
  private:
    double real_;
    double imaginario_;

  public:
    Complejo();
    Complejo(double real, double imaginario);

    Complejo operator+(const Complejo& otro) const;
    Complejo operator-(const Complejo& otro) const;

    friend std::ostream& operator<<(std::ostream& os, const Complejo& complejo);
    friend std::istream& operator>>(std::istream& is, Complejo& complejo);
};

#endif  // COMPLEJO_H
