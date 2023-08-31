#include "AnalizadorSintactico.h"

AnalizadorSintactico::AnalizadorSintactico(const string &cadena) {
  Tokens.start(cadena);
  postfija = Tokens.isPostfija();
  try {
    sem_cadena = expr();
  } catch (const std::exception &e) {
    cout << "sintaxis incorrecta \n" << e.what() << "\n";
  }
}
void AnalizadorSintactico::coincidir(const TokenType &token) {
  if (Tokens.List[i].tipo != token) {
    throw std::runtime_error("Syntax Error: " + Tokens.List[i].value);
  } else {
    m_cadena += Tokens.List[i].value;
    i++;
  }
}

string AnalizadorSintactico::term() { return (Resto_term(fact())); }

string AnalizadorSintactico::Resto_expr(string resto_her) {
  if (Tokens.List[i].tipo == TokenType::OPERADOR_TERM) {
    string op = Tokens.List[i].value;
    coincidir(TokenType::OPERADOR_TERM);
    if (!postfija) {
      if (op == "+") {
        int r = stoi(resto_her) + stoi(term());
        return (Resto_expr(to_string(r)));
      } else if (op == "-") {
        int r = stoi(resto_her) - stoi(term());
        return (Resto_expr(to_string(r)));
      }
    } else {
      return (Resto_expr(resto_her + term() + op));
    }
  } else {
    return (resto_her);
  }
}

string AnalizadorSintactico::Resto_term(string resto_her) {
  if (Tokens.List[i].tipo == TokenType::OPERADOR_FACT) {
    string op = Tokens.List[i].value;
    coincidir(TokenType::OPERADOR_FACT);
    if (!postfija) {
      if (op == "/") {
        int t = stoi(resto_her) / stoi(fact());
        return (Resto_term(to_string(t)));
      } else if (op == "*") {
        int t = stoi(resto_her) * stoi(fact());
        return (Resto_term(to_string(t)));
      }
    } else {
      return (Resto_term(resto_her + fact() + op));
    }
  } else {
    throw std::runtime_error("Syntax Error: " + Tokens.List[i].value);
  }
  return (resto_her);
}

string AnalizadorSintactico::fact() {
  string fact = "";
  if (Tokens.List[i].tipo == TokenType::PARENTESIS) {
    coincidir(TokenType::PARENTESIS);
    fact = expr();
    coincidir(TokenType::PARENTESIS_END);
  } else {
    fact = digito();
  }
  return fact;
}

string AnalizadorSintactico::digito() {
  if (Tokens.List[i].tipo == TokenType::IDENTIFICADOR) {
    coincidir(TokenType::IDENTIFICADOR);
  } else {
    coincidir(TokenType::NUMERO);
  }
  return (Tokens.List[i - 1].value);
}

string AnalizadorSintactico::expr() { return Resto_expr(term()); }
