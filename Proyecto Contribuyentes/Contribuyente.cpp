#include "Contribuyente.h"
#include <time.h>
#include <algorithm>
#include <string>

Contribuyente::Contribuyente() {
  incializar_arreglo(m_nombre, sizeof(m_nombre) / sizeof(char));
  incializar_arreglo(m_apellido[0], sizeof(m_apellido) / sizeof(char));
  incializar_arreglo(m_apellido[1], sizeof(m_apellido) / sizeof(char));
  incializar_arreglo(m_fechaNacimiento,
                     sizeof(m_fechaNacimiento) / sizeof(char));
}

void Contribuyente::set_rfc() {
  int D;
  char letras[26];
  std::string abc = "abcdefghijklmnopqrstuvwxyz";
  strcpy(letras, abc.c_str());
  m_rfc[0] = m_apellido[0][0];
  m_rfc[1] = m_apellido[0][1];
  m_rfc[2] = m_apellido[1][0];
  m_rfc[3] = m_nombre[0];
  m_rfc[4] = m_fechaNacimiento[2];
  m_rfc[5] = m_fechaNacimiento[3];
  m_rfc[6] = m_fechaNacimiento[5];
  m_rfc[7] = m_fechaNacimiento[6];
  m_rfc[8] = m_fechaNacimiento[8];
  m_rfc[9] = m_fechaNacimiento[9];
  srand(time(0));
  D = rand() % 10;
  m_rfc[10] = to_string(D).c_str()[0];
  D = rand() % 25;
  m_rfc[11] = letras[D];
  D = rand() % 10;
  m_rfc[12] = to_string(D).c_str()[0];
  m_rfc[13] = '\0';
}

void Contribuyente::incializar_arreglo(char dato[], int largo) {
  for (int i = 0; i < largo; i++) {
    dato[i] = '\0';
  }
}

void Contribuyente::mayusculas(char dato[]) {
  for (int i = 0; dato[i] != '\0'; i++) {
    if (dato[i] != '\0') {
      dato[i] = toupper(dato[i]);
    }
  }
}

void Contribuyente::espacios(char dato[], int largo) {
  int fin = 0;
  for (int i = 0; dato[i] != '\0'; i++) {
    fin++;
  }
  for (fin; fin < (largo - 1); fin++) {
    dato[fin] = ' ';
  }
  dato[fin] = '\0';
}

void Contribuyente::actualizar_mayusculas() {
  mayusculas(m_nombre);
  mayusculas(m_apellido[0]);
  mayusculas(m_apellido[1]);
  mayusculas(m_rfc);
  mayusculas(m_direccion);
  mayusculas(m_ciudad);
  m_estadoCivil = toupper(m_estadoCivil);
}

void Contribuyente::actualizar_espacios() {
  espacios(m_nombre, sizeof(m_nombre) / sizeof(char));
  espacios(m_apellido[0], sizeof(m_apellido[0]) / sizeof(char));
  espacios(m_apellido[1], sizeof(m_apellido[1]) / sizeof(char));
  espacios(m_rfc, sizeof(m_rfc) / sizeof(char));
  espacios(m_direccion, sizeof(m_direccion) / sizeof(char));
  espacios(m_ciudad, sizeof(m_ciudad) / sizeof(char));
  espacios(m_telefono, 12);
}
