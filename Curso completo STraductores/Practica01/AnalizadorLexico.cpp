#include "AnalizadorLexico.h"

AnalizadorLexico::AnalizadorLexico() {}

void AnalizadorLexico::start(string file) {
  Archivo.open(file, ios::in);

  if (!Archivo.is_open()) {
    throw std::runtime_error("tipo failed");
  }
  leer();
}

void AnalizadorLexico::leer() {
  while (!Archivo.eof()) {
    getline(Archivo, linea);
    separate();
  }
}

void AnalizadorLexico::separate() {
  int i = 0;
  while (linea[i] != '\000') {
    while (isdigit(linea[i]) || isalpha(linea[i])) {
      _token += linea[i];
      i++;
    }
    if (_token == "") {
      _token += linea[i];
      i++;
    }
    evaluate();
  }
}

bool AnalizadorLexico::isNumber() {
  for (char const &c : _token) {
    if (std::isdigit(c) == 0) return false;
  }
  return true;
}

void AnalizadorLexico::evaluate() {
  Token nuevo;
  if (_token == "(") {
    nuevo.tipo = TokenType::PARENTESIS;
  } else if (_token == ")") {
    nuevo.tipo = TokenType::PARENTESIS_END;
  } else if (_token == "+" || _token == "-") {
    nuevo.tipo = TokenType::OPERADOR_TERM;
  } else if (_token == "*" || _token == "/") {
    nuevo.tipo = TokenType::OPERADOR_FACT;
  } else if (isNumber()) {
    nuevo.tipo = TokenType::NUMERO;
  } else if (isalpha(_token[0])) {
    nuevo.tipo = TokenType::IDENTIFICADOR;
    postfija = true;
  } else {
    throw std::runtime_error("evaluation failed");
  }

  nuevo.value = _token;
  List.insert(List.end(), nuevo);
  _token.clear();
}
