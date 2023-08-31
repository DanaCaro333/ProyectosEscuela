#include "AnalizadorSintactico.h"

#include <string>
AnalizadorSintactico::AnalizadorSintactico(const string &cadena) {
  try {
    Tokens.start(cadena);
    indice = Tokens.total - 1;
    postfija = Tokens.isPostfija();
    print(expr(), 0);
    int i = 0;
    while (a_cadena[i] != "") {
      cout << endl << "nivel " + to_string(i) + " " + a_cadena[i];
      i++;
    }
    cout << endl << endl << "SINTAXIS CORRECTA!!!" << endl;

  } catch (const std::exception &e) {
    cout << "sintaxis incorrecta " << e.what() << "\n";
  }
}
void AnalizadorSintactico::print(Nodo *root, int nivel) {
  cout.flush();
  if (nivel == 0) {
    cout << "Raiz: " + Tokens.Valor(Tokens.List[root->dato]) << endl;
    a_cadena[nivel] = Tokens.Valor(Tokens.List[root->dato]);
  } else {
    cout << Tokens.Valor(Tokens.List[root->dato]) << endl;
    a_cadena[nivel] =
        a_cadena[nivel] + " " + Tokens.Valor(Tokens.List[root->dato]);
  }
  if (root->right != NULL) {
    nivel++;
    cout << "nivel: " + to_string(nivel) + " lado izquierdo: ";
    print(root->left, nivel);
    cout << "nivel: " + to_string(nivel) + " lado derecho: ";
    print(root->right, nivel);
  }
}
void AnalizadorSintactico::coincidir(const TokenType &token) {
  if (Tokens.List[indice].tipo != token) {
    throw std::runtime_error("token failed");
  } else {
    indice = indice - 1;
  }
}

Nodo *AnalizadorSintactico::term() {
  Nodo *nuevo = new Nodo;
  if (Tokens.List[indice].tipo == TokenType::PARENTESIS_END) {
    coincidir(TokenType::PARENTESIS_END);
    nuevo = expr();
  } else if (Tokens.List[indice].tipo == TokenType::IDENTIFICADOR ||
             Tokens.List[indice].tipo == TokenType::NUMERO) {
    nuevo->fill(indice, NULL, NULL);
    indice = indice - 1;
  }
  return nuevo;
}

Nodo *AnalizadorSintactico::expr() {
  Nodo *nuevo = new Nodo;
  if (indice > 1 && Tokens.List[indice - 1].tipo != TokenType::PARENTESIS) {
    nuevo->right = term();
    if (Tokens.List[indice].tipo != TokenType::MAS &&
        Tokens.List[indice].tipo != TokenType::MENOS) {
      throw std::runtime_error("sintaxis failed");
    }
    nuevo->dato = indice;
    indice = indice - 1;
    nuevo->left = expr();
  } else {
    nuevo = term();
    indice = indice - 1;
  }
  return nuevo;
}
