#ifndef ANALIZADORLEXICO_H
#define ANALIZADORLEXICO_H
#include <iostream>
#include <string>
#include <vector>
#pragma once
#include <fstream>

#include "Hoja.h"

using namespace std;
enum class TokenType {
  NUMERO,
  IDENTIFICADOR,
  MAS,
  MENOS,
  PARENTESIS,
  PARENTESIS_END,
};

class AnalizadorLexico {
 private:
  fstream Archivo;
  string linea;
  string _token;
  bool postfija = false;

  void leer();

  bool isNumber();
  void separate();
  void evaluate();

 public:
  struct Token {
    TokenType tipo;
    int id;
  };

  int total = 0;
  AnalizadorLexico();
  vector<Hoja> Tabla;
  vector<Token> List;
  string Valor(Token _token);
  int LookTable(string valor);
  void start(string file);
  bool isPostfija() { return postfija; }
};

#endif