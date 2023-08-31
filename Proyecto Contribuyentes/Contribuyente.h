#ifndef CONTRIBUYENTE_H_INCLUDED
#define CONTRIBUYENTE_H_INCLUDED
#include <cstring>
#include <random>
using namespace std;
#pragma once

class Contribuyente {
 private:
  char m_rfc[14];
  char m_nombre[32];
  char m_apellido[2][32];
  char m_telefono[12];
  char m_direccion[45];
  char m_ciudad[32];
  char m_fechaNacimiento[11];
  char m_estadoCivil;
  int m_dependientes;

 public:
  Contribuyente();
  void incializar_arreglo(char dato[], int largo);
  void espacios(char dato[], int largo);
  void mayusculas(char dato[]);
  void actualizar_mayusculas();
  void actualizar_espacios();
  void set_rfc();
  void set_rfc(char rfc[]) { strcpy(m_rfc, rfc); }
  void set_nombre(char nombre[32]) { strcpy(m_nombre, nombre); }
  void set_apellido(char apellido[2][32]) {
    strcpy(m_apellido[0], apellido[0]);
    strcpy(m_apellido[1], apellido[1]);
  }
  void set_telefono(char telefono[12]) { strcpy(m_telefono, telefono); }
  void set_direccion(char direccion[45]) { strcpy(m_direccion, direccion); }
  void set_ciudad(char ciudad[32]) { strcpy(m_ciudad, ciudad); }
  void set_fechaNacimiento(char fechaNacimiento[10]) {
    strcpy(m_fechaNacimiento, fechaNacimiento);
  }
  void set_estadoCivil(char estadoCivil) { m_estadoCivil = estadoCivil; }
  void set_dependientes(int dependientes) { m_dependientes = dependientes; }

  char *get_rfc() { return m_rfc; }
  char *get_nombre() { return m_nombre; }
  char *get_apellidoPaterno() { return m_apellido[0]; }
  char *get_apellidoMaterno() { return m_apellido[1]; }
  char *get_telefono() { return m_telefono; }
  char *get_direccion() { return m_direccion; }
  char *get_ciudad() { return m_ciudad; }
  char *get_fechaNacimiento() { return m_fechaNacimiento; }
  char get_estadoCivil() { return m_estadoCivil; }
  int get_dependientes() { return m_dependientes; }
};

#endif
