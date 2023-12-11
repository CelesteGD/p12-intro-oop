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

#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include <cmath>

// Enumeración para representar el color del círculo
enum Color {
    ROJO,
    VERDE,
    AZUL,
    AMARILLO,
    OTRO
};

class Circulo {
private:
    double xCentro_;
    double yCentro_;
    double radio_;
    Color color;

public:
    // Constructor
    Circulo(double xCentro, double yCentro, double radio, Color color);

    // Métodos
    double Area() const;
    double Perimetro() const;
    void Print() const;
    bool EsInterior(double x, double y) const;
};

#endif  // CIRCULO_H

