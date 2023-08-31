#ifndef ANALIZADORSINTACTICO_H
#define ANALIZADORSINTACTICO_H
#include <iostream>
#include <string>

#include "AnalizadorLexico.h"
#include "Nodo.h"

#pragma once

using namespace std;

class AnalizadorSintactico {
 public:
  explicit AnalizadorSintactico(const string &cadena);
  int get_cadena() { return reglas; }

 private:
  AnalizadorLexico Tokens;
  string a_cadena[20];
  int reglas;
  bool postfija = false;
  int indice;
  void print(Nodo *root, int nivel);
  void coincidir(const TokenType &token);
  Nodo *term();
  Nodo *expr();
};

#endif
