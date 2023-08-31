#ifndef ANALIZADORSINTACTICO_H
#define ANALIZADORSINTACTICO_H
#include <iostream>
#include <string>
#include <vector>

#include "AnalizadorLexico.h"
#pragma once
using namespace std;

class AnalizadorSintactico {
 public:
  explicit AnalizadorSintactico(const string &cadena);
  ~AnalizadorSintactico();
  void print();

 private:
  AnalizadorLexico Tokens;
  string m_cadena;
  string codigo;
  string dato_str;
  int n = 0;
  int i = 0;

  void coincidir(const TokenType &token);
  void skip_spaces();
  void programa();
  void declaraciones();
  void sig_declaraciones();
  void declaracion();
  void tipo();
  void lista_variables();
  void sig_lista_variables();
  void identificador();
  void letra();
  void resto_letras();
  void letraN();
  void ordenes();
  void sig_ordenes();
  void orden();
  void condicion();
  void sig_condicion();
  void comparacion();
  void condicion_op();
  void operador();
  void numeros();
  void numero_entero();
  void numero();
  void numero_real();
  void bucle_while();
  void asignar();
  void expresion_arit();
  void exp_arit();
  void operador_arit();
};

#endif