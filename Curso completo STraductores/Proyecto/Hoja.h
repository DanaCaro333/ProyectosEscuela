#ifndef HOJA_H
#define HOJA_H

#pragma once
#include <string>
#include <vector>

using namespace std;
class Hoja {
 public:
  Hoja(string id, int entrada) {
    val = id;
    index = entrada;
  }
  ~Hoja();
  string val;
  int index;

 private:
};

#endif