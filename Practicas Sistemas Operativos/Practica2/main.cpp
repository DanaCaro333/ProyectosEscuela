#include <math.h>
#include <string.h>

#include <fstream>
#include <iostream>

using namespace std;

int convert(string hexDecNum) {
  int decimalNum = 0, rem, i = 0, len = 0;
  while (hexDecNum[i] != '\0') {
    len++;
    i++;
  }
  len--;
  i = 0;
  while (len >= 0) {
    rem = hexDecNum[len];
    if (rem >= 48 && rem <= 57)
      rem = rem - 48;
    else if (rem >= 65 && rem <= 70)
      rem = rem - 55;
    else if (rem >= 97 && rem <= 102)
      rem = rem - 87;
    decimalNum = decimalNum + (rem * pow(16, i));
    len--;
    i++;
  }
  return decimalNum;
}

string convert2(int decimalNum) {
  int rem, i = 0;
  string hexaDecimalNum;
  string result;
  while (decimalNum != 0) {
    rem = decimalNum % 16;
    if (rem < 10) {
      rem = rem + 48;
    } else {
      rem = rem + 55;
    }

    hexaDecimalNum += rem;
    decimalNum = decimalNum / 16;
  }
  int len = hexaDecimalNum.length();

  for (int x = 0; x <= len; x++) {
    result += hexaDecimalNum[len - x - 1];
  }

  return result;
}

int main() {
  string linea;
  string dato;
  int num = 0;
  fstream Clase;
  string tipo;
  fstream Archivo;
  fstream Resultado;
  string numerosd;
  string nombre;
  string numerosh;
  Archivo.open("Archivo.txt", ios::in);

  if (!Archivo.is_open()) {
    cout << "failed to open " << '\n';
  }

  while (!Archivo.eof()) {
    int i = -1;
    getline(Archivo, linea);
    while (linea[i] != ',') {
      i++;
      if (linea[i] != ':' && linea[i] != ',') {
        dato += linea[i];
      } else {
        numerosd += " " + to_string(convert(dato)) + " :";
        dato.erase();
      }
    }
    i++;
    for (i; linea[i] != ','; i++) {
    }
    i++;
    for (i; linea[i] != ','; i++) {
      nombre += linea[i];
    }
    nombre += " :";
    i++;
    for (i; linea[i] != ','; i++) {
    }
    i++;
    for (i; linea[i] != ','; i++) {
    }
    i++;
    dato.erase();
    while (i < linea.length()) {
      if (linea[i] != '.' && linea[i] != '\000' && linea[i] != '\n') {
        dato += linea[i];
      } else {
        string res = convert2(stoi(dato));
        numerosh += res;
        numerosh.pop_back();
        numerosh.append(".");
        dato.erase();
      }
      if (i + 1 == linea.length()) {
        string res = convert2(stoi(dato));
        numerosh += res;
        numerosh.pop_back();
      }
      i++;
    }
    Resultado.open("Resultado.txt", ios::app);
    Resultado << nombre + numerosd + numerosh + "\n";
    Resultado.close();
    dato.erase();
    nombre.erase();
    numerosd.erase();
    numerosh.erase();
    linea.erase();
  }
}
