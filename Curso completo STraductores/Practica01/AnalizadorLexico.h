#ifndef ANALIZADORLEXICO_H
#define ANALIZADORLEXICO_H
#include <iostream>
#include <string>
#include <vector>
#pragma once
#include <fstream>

using namespace std;
enum class TokenType {
  NUMERO,
  IDENTIFICADOR,
  PARENTESIS,
  PARENTESIS_END,
  OPERADOR_TERM,
  OPERADOR_FACT,
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
    string value;
  };
  AnalizadorLexico();
  vector<Token> List;
  void start(string file);
  bool isPostfija() { return postfija; }
};

#endif