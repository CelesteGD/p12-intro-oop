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

#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>
#include <cmath>

class Point2D {
private:
    double x_;
    double y_;

public:
    // Constructor
    Point2D(double x = 0.0, double y = 0.0);

    // Método para mostrar las coordenadas del punto
    void Show() const;

    // Método para cambiar las coordenadas del punto
    void Move(double newX, double newY);

    // Método para calcular la distancia entre dos puntos
    double Distance(const Point2D& other) const;

    // Método para calcular el punto medio entre dos puntos
    Point2D Middle(const Point2D& other) const;
};

#endif  // POINT2D_H

