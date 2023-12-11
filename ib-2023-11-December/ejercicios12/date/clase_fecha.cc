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

#include "clase_fecha.h"

Fecha::Fecha(int dia, int mes, int year) : dia_(dia), mes_(mes), year_(year) {
  if (!EsFechaValida()) {
      std::cerr << "Error: Fecha no válida." << std::endl;
      exit(1);
  }
}

int Fecha::ObtenerDia() const {
  return dia_;
}

int Fecha::ObtenerMes() const {
  return mes_;
}

int Fecha::ObtenerYear() const {
  return year_;
}

bool Fecha::EsFechaValida() const {
  if (mes_ < 1 || mes_ > 12 || dia_ < 1 || dia_ > 31) {
      return false;
  }

  // Validar fechas para meses con 30 días
  if ((mes_ == 4 || mes_ == 6 || mes_ == 9 || mes_ == 11) && dia_ > 30) {
      return false;
  }

  // Validar fechas para febrero
  if (mes_ == 2) {
     if ((EsBisiesto(year_) && dia_ > 29) || (!EsBisiesto(year_) && dia_ > 28)) {
          return false;
      }
  }

  return true;
}

bool Fecha::EsBisiesto(int year) const {
  // Un año es bisiesto si es divisible por 4
  // Aunque si es divisible por 100, también debe ser divisible por 400
  return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

void Fecha::MostrarFecha() const {
  std::cout << ObtenerDia() << "/" << ObtenerMes() << "/" << ObtenerYear() << std::endl;
}

