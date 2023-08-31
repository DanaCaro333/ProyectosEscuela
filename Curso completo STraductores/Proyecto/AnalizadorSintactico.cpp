#include "AnalizadorSintactico.h"

void AnalizadorSintactico::skip_spaces() {
  while (Tokens.List[i].tipo == TokenType::ESPACIO) {
    i++;
  }
}
void AnalizadorSintactico::print() { cout << codigo << "\n"; }

AnalizadorSintactico::AnalizadorSintactico(const string &cadena) {
  Tokens.start(cadena);
  try {
    programa();
    cout << "SINTAXIS CORRECTA!!!" << endl;
  } catch (const std::exception &e) {
    cout << "sintaxis incorrecta " << e.what() << "\n";
  } 
}

AnalizadorSintactico::~AnalizadorSintactico() {}

void TresDirecciones();

void AnalizadorSintactico::coincidir(const TokenType &token) {
  if (Tokens.List[i].tipo != token) {
    throw std::runtime_error("token failed");
  } else {
    i++;
  }
}

void AnalizadorSintactico::programa() {
  coincidir(TokenType::BEGIN);
  skip_spaces();
  declaraciones();
  ordenes();
  coincidir(TokenType::END);
}
void AnalizadorSintactico::declaraciones() {
  declaracion();
  coincidir(TokenType::PUNTO_Y_COMA);
  skip_spaces();
  sig_declaraciones();
}
void AnalizadorSintactico::sig_declaraciones() {
  if (Tokens.List[i].tipo == TokenType::TIPO) {
    skip_spaces();
    declaracion();
    coincidir(TokenType::PUNTO_Y_COMA);
    sig_declaraciones();
  }
}
void AnalizadorSintactico::declaracion() {
  tipo();
  lista_variables();
}
void AnalizadorSintactico::tipo() {
  coincidir(TokenType::TIPO);
  if (Tokens.List[i].value == "entero") {
    codigo += Tokens.List[i].value;
  } else if (Tokens.List[i].value == "real") {
    codigo += Tokens.List[i].value;
  }
  if (dato_str != "") {
    throw std::runtime_error("tipo failed");
  }
  i++;
  skip_spaces();
}

void AnalizadorSintactico::lista_variables() {
  coincidir(TokenType::IDENTIFICADOR);
  i--;
  identificador();
  sig_lista_variables();
}

void AnalizadorSintactico::sig_lista_variables() {
  skip_spaces();
  if (Tokens.List[i].tipo == TokenType::COMA) {
    coincidir(TokenType::COMA);
    skip_spaces();
    lista_variables();
  }
}

void AnalizadorSintactico::identificador() {
  if (Tokens.List[i].value.length() == 1) {
    letra();
    i++;
  } else {
    letra();
    resto_letras();
  }
}

void AnalizadorSintactico::letra() { codigo += Tokens.List[i].value[n]; }

void AnalizadorSintactico::resto_letras() {
  n++;
  if (Tokens.List[i].value.length() - n == 1) {
    letraN();
    n = 0;
    i++;
  } else {
    letraN();
    resto_letras();
  }
}
void AnalizadorSintactico::letraN() { codigo += Tokens.List[i].value[n]; }
void AnalizadorSintactico::ordenes() {
  orden();
  coincidir(TokenType::PUNTO_Y_COMA);
  sig_ordenes();
}
void AnalizadorSintactico::sig_ordenes() {
  if (Tokens.List[i].tipo == TokenType::CONDICION ||
      Tokens.List[i].tipo == TokenType::BUCLE ||
      Tokens.List[i].tipo == TokenType::IDENTIFICADOR) {
    orden();
    coincidir(TokenType::PUNTO_Y_COMA);
    sig_ordenes();
  }
}
void AnalizadorSintactico::orden() {
  if (Tokens.List[i].tipo == TokenType::CONDICION) {
    codigo += Tokens.List[i].value;
    i++;
    skip_spaces();
    condicion();
  } else if (Tokens.List[i].tipo == TokenType::BUCLE) {
    codigo += Tokens.List[i].value;
    i++;
    skip_spaces();
    bucle_while();
  } else if (Tokens.List[i].tipo == TokenType::IDENTIFICADOR) {
    asignar();
  } else {
    throw std::runtime_error("token failed");
  }
}
void AnalizadorSintactico::condicion() {
  coincidir(TokenType::PARENTESIS);
  comparacion();
  coincidir(TokenType::PARENTESIS_END);
  skip_spaces();
  ordenes();
  sig_condicion();
}
void AnalizadorSintactico::sig_condicion() {
  if (Tokens.List[i].tipo == TokenType::CONDICION_ELSE) {
    coincidir(TokenType::CONDICION_ELSE);
    ordenes();
    coincidir(TokenType::END);
  } else {
    coincidir(TokenType::END);
  }
}
void AnalizadorSintactico::comparacion() {
  skip_spaces();
  operador();
  condicion_op();
  skip_spaces();
  operador();
}
void AnalizadorSintactico::condicion_op() {
  skip_spaces();
  coincidir(TokenType::OPERADOR_BOOL);
}
void AnalizadorSintactico::operador() {
  if (Tokens.List[i].tipo == TokenType::IDENTIFICADOR) {
    identificador();
  } else if (Tokens.List[i].tipo == TokenType::NUMERO) {
    numeros();
  } else {
    throw std::runtime_error("operador failed");
  }
}
void AnalizadorSintactico::numeros() {
  if (Tokens.List[i + 1].tipo == TokenType::PUNTO) {
    numero_real();
  } else {
    numero_entero();
  }
}
void AnalizadorSintactico::numero_entero() {
  if (Tokens.List[i].value.length() - n == 1) {
    numero();
    n = 0;
    i++;
  } else {
    n++;
    numero();
    numero_entero();
  }
}
void AnalizadorSintactico::numero() { codigo += Tokens.List[i].value[n]; }
void AnalizadorSintactico::numero_real() {
  numero_entero();
  coincidir(TokenType::PUNTO);
  numero_entero();
}
void AnalizadorSintactico::bucle_while() {
  coincidir(TokenType::PARENTESIS);
  comparacion();
  coincidir(TokenType::PARENTESIS_END);
  skip_spaces();
  ordenes();
  coincidir(TokenType::BUCLE_END);
}
void AnalizadorSintactico::asignar() {
  coincidir(TokenType::IDENTIFICADOR);
  skip_spaces();
  coincidir(TokenType::DOS_PUNTOS);
  coincidir(TokenType::OPERADOR_BOOL);
  if (Tokens.List[i - 1].value != "=") {
    throw std::runtime_error("token failed");
  }
  skip_spaces();
  expresion_arit();
}
void AnalizadorSintactico::expresion_arit() {
  if (Tokens.List[i].tipo == TokenType::PARENTESIS) {
    expresion_arit();
    operador_arit();
    expresion_arit();
    coincidir(TokenType::PARENTESIS_END);
  } else if (Tokens.List[i].tipo == TokenType::IDENTIFICADOR) {
    identificador();
    exp_arit();
  } else if (Tokens.List[i].tipo == TokenType::NUMERO) {
    numeros();
    skip_spaces();
    exp_arit();
  } else {
    throw std::runtime_error("token failed");
  }
}
void AnalizadorSintactico::exp_arit() {
  if (Tokens.List[i].tipo == TokenType::OPERADOR_ARITMETICO) {
    operador_arit();
    expresion_arit();
    exp_arit();
  }
}
void AnalizadorSintactico::operador_arit() {
  coincidir(TokenType::OPERADOR_ARITMETICO);
  skip_spaces();
}
