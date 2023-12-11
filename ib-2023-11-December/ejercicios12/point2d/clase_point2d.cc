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

#include "clase_point2d.h"

// Constructor
Point2D::Point2D(double x, double y) : x_(x), y_(y) {}

// Método para mostrar las coordenadas del punto
void Point2D::Show() const {
  std::cout << "(" << x_ << ", " << y_ << ")";
}

// Método para cambiar las coordenadas del punto
void Point2D::Move(double newX, double newY) {
  x_ = newX;
  y_ = newY;
}

// Método para calcular la distancia entre dos puntos
double Point2D::Distance(const Point2D& other) const {
  double dx = x_ - other.x_;
  double dy = y_ - other.y_;
  return std::sqrt(dx * dx + dy * dy);
}

// Método para calcular el punto medio entre dos puntos
Point2D Point2D::Middle(const Point2D& other) const {
  double midX = (x_ + other.x_) / 2.0;
  double midY = (y_ + other.y_) / 2.0;
  return Point2D(midX, midY);
}

