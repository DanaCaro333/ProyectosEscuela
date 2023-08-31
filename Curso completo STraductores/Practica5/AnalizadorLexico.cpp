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

int AnalizadorLexico::LookTable(string valor) {
  for (int i = 0; i < Tabla.size(); i++) {
    if (Tabla[i].val == valor) {
      return Tabla[i].index;
    }
  }
  Hoja temp(valor, Tabla.size());
  Tabla.push_back(temp);
  return temp.index;
}

void AnalizadorLexico::evaluate() {
  Token nuevo;
  if (_token == "(") {
    nuevo.tipo = TokenType::PARENTESIS;
    nuevo.id = -1;
    total++;
  } else if (_token == ")") {
    nuevo.tipo = TokenType::PARENTESIS_END;
    nuevo.id = -1;
    total++;

  } else if (_token == "+") {
    nuevo.tipo = TokenType::MAS;
    nuevo.id = -1;
    total++;

  } else if (_token == "-") {
    nuevo.tipo = TokenType::MENOS;
    nuevo.id = -1;
    total++;

  } else if (isNumber()) {
    nuevo.tipo = TokenType::NUMERO;
    nuevo.id = LookTable(_token);
    total++;

  } else if (isalpha(_token[0])) {
    nuevo.tipo = TokenType::IDENTIFICADOR;
    nuevo.id = LookTable(_token);
    total++;
    postfija = true;
  } else {
    throw std::runtime_error("not valid token found");
  }

  List.insert(List.end(), nuevo);
  _token.clear();
}

string AnalizadorLexico::Valor(Token _token) {
  if (_token.id == -1) {
    switch (_token.tipo) {
      case TokenType::PARENTESIS:
        return "(";
        break;
      case TokenType::PARENTESIS_END:
        return ")";
        break;
      case TokenType::MAS:
        return "+";
        break;
      case TokenType::MENOS:
        return "-";
        break;
    }
  } else {
    return Tabla[_token.id].val;
  }
}
