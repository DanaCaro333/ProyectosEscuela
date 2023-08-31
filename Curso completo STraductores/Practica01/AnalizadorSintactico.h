#ifndef ANALIZADORSINTACTICO_H
#define ANALIZADORSINTACTICO_H
#include <iostream>
#include <string>

#include "AnalizadorLexico.h"

#pragma once

using namespace std;

class AnalizadorSintactico {
 public:
  explicit AnalizadorSintactico(const string &cadena);
  int get_cadena() { return reglas; }

 private:
  AnalizadorLexico Tokens;
  int reglas;
  string m_cadena;
  string sem_cadena;
  bool postfija = false;
  int i = 0;

  void coincidir(const TokenType &token);
  string term();
  string fact();
  string Resto_expr(string resto_her);
  string Resto_term(string resto_her);
  string digito();
  string expr();
};

#endif
