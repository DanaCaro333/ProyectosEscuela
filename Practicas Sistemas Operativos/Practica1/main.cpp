#include <fstream>
#include <iostream>
using namespace std;

int main() {
  string linea;
  string dato;
  fstream Clase;
  string tipo;
  fstream Archivo;
  Archivo.open("Archivo.txt", ios::in);

  if (!Archivo.is_open()) {
    cout << "failed to open " << '\n';
  }

  while (!Archivo.eof()) {
    getline(Archivo, linea, '|');
    for (int i = 0; i != linea.length(); i++) {
      if (linea[i] != '\t' && linea[i] != '\n' &&
          linea[i] != ' ') {  // aqui almacena el dato eliminando los espacios
        dato += linea[i];
      }
    }
    int largo = dato.length();

    if (dato != "") {  // valida que no este trabajando con un dato vacio
      if (isalpha(dato[largo - 2]) &&
          isalpha(dato[largo - 1])) {  // Clase 1 : tipo de dato que termina en
                                       // letra-letra
        tipo = "Clase1.txt";
      } else if (isalpha(dato[largo - 2]) &&
                 !isalpha(dato[largo - 1])) {  // Clase 2 : tipo de dato que
                                               // termina en letra-numero
        tipo = "Clase2.txt";
      } else if (!isalpha(dato[largo - 2]) &&
                 !isalpha(dato[largo - 1])) {  // Clase 3 : tipo de dato que
                                               // termina en numero-numero
        tipo = "Clase3.txt";
      } else if (!isalpha(dato[largo - 2]) &&
                 isalpha(dato[largo - 1])) {  // Clase 4 : tipo de dato que
                                              // termina en numero-letra
        tipo = "Clase4.txt";
      }
      Clase.open(tipo, ios::app);
      Clase << dato + "\n";
      Clase.close();
      dato.erase();
    } else {
      cout << "Clasificacion finalizada";
    }
  }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using TMPro;

public class Resumen : MonoBehaviour
{
    // Start is called before the first frame update

    private TextMeshProUGUI _scoreTxt, _vidasTxt;
    [SerializeField]
    private GameObject PanelVida, PanelScore;

    void Start()
    {
        _scoreTxt = PanelScore.GetComponentInChildren<TextMeshProUGUI>();
        _vidasTxt = PanelVida.GetComponentInChildren<TextMeshProUGUI>();
        
    }



    // Update is called once per frame
    void Update()
    {
      _scoreTxt.text = Score.instance2.textoPuntos;
      _vidasTxt.text = Vidas.instance.textoVidas;   
    }

}