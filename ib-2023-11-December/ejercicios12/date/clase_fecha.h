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

#ifndef FECHA_H
#define FECHA_H

#include <iostream>

class Fecha {
private:
  int dia_;
  int mes_;
  int year_;

  bool EsBisiesto(int year) const;

public:
  Fecha(int dia, int mes, int year);

  // Métodos para obtener los valores de día, mes y año
  int ObtenerDia() const;
  int ObtenerMes() const;
  int ObtenerYear() const;

  // Método para determinar si la fecha es válida
  bool EsFechaValida() const;

  // Método para mostrar la fecha
  void MostrarFecha() const;
};

#endif  // FECHA_H

