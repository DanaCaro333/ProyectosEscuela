#ifndef MANAGER_H
#define MANAGER_H
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <ctype.h>
#include "Contribuyente.h"
#pragma once

class Manager {
 private:
  int index = 1;
  char rfc[13];
  char nombre[32];
  char apellido[2][32];
  char fechaNacimiento[11];
  char telefono[12];
  char direccion[45];
  char ciudad[32];
  char estadoCivil;
  int dependientes;
  Contribuyente contribuyentes[100];
  Contribuyente Persona;
  ofstream archivo;
  int opc;

 public:
  Manager();
  ~Manager();
  void agregar();
  void menu();
  void rellenar_campos(char contribuyente[], int x);
  void arreglo_contribuyentes();
};

#endif
