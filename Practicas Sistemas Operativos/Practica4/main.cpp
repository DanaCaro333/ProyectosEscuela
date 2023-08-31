#include <iostream>
#include <map>

using namespace std;

struct bloque {
  int size;
  bool used;
};

void mejor_ajuste(bloque c_bloques[], int archivos[], int num_bloques) {
  bloque bloques[50];
  for (int x = 0; x < 50; x++) {
    bloques[x] = c_bloques[x];
  }
  int i = 0, mejor = -1;
  for (int n = 0; n < 5; n++) {
    do {
      if (bloques[i].size >= archivos[n] && bloques[i].used == false) {
        if (mejor == -1) {
          mejor = i;
        } else {
          if (bloques[mejor].size > bloques[i].size) {
            mejor = i;
          }
        }
      }
      i++;
    } while (i != num_bloques);
    if (mejor == -1) {
      cout << "Archivo " + to_string(n + 1) + "-> no se pudo posicionar\n";
    } else {
      cout << "Archivo " + to_string(n + 1) + " -> Bloque " +
                  to_string(mejor + 1) + "\n";
      bloques[mejor].used = true;
    }
    i = 0;
    mejor = -1;
  }
  cout << "\n\n";
}
void primer_ajuste(bloque c_bloques[], int archivos[], int num_bloques) {
  bloque bloques[50];
  for (int x = 0; x < 50; x++) {
    bloques[x] = c_bloques[x];
  }
  int i = 0;
  bool end = false;
  for (int n = 0; n < 5; n++) {
    do {
      if (bloques[i].size >= archivos[n] && bloques[i].used == false) {
        cout << "Archivo " + to_string(n + 1) + " -> Bloque " +
                    to_string(i + 1) + "\n";
        end = true;
        bloques[i].used = true;
      } else {
        i++;
      }
    } while (end != true && i != num_bloques);
    if (i == num_bloques) {
      cout << "Archivo " + to_string(n + 1) + "-> no se pudo posicionar\n";
    }
    end = false;
    i = 0;
  }
  cout << "\n\n";
}

void peor_ajuste(bloque c_bloques[], int archivos[], int num_bloques) {
  bloque bloques[50];
  for (int x = 0; x < 50; x++) {
    bloques[x] = c_bloques[x];
  }
  int i = 0, peor = -1;
  for (int n = 0; n < 5; n++) {
    do {
      if (bloques[i].size >= archivos[n] && bloques[i].used == false) {
        if (peor == -1) {
          peor = i;
        } else {
          if (bloques[peor].size < bloques[i].size) {
            peor = i;
          }
        }
      }
      i++;
    } while (i != num_bloques);
    if (peor == -1) {
      cout << "Archivo " + to_string(n + 1) + "-> no se pudo posicionar\n";
    } else {
      cout << "Archivo " + to_string(n + 1) + " -> Bloque " +
                  to_string(peor + 1) + "\n";
      bloques[peor].used = true;
    }
    i = 0;
    peor = -1;
  }
  cout << "\n\n";
}

int main(int, char **) {
  int num_bloques;

  int size, est, opc;
  cout << "Numero de bloques de memoria: ";
  cin >> num_bloques;
  cout << "\n";
  bloque bloques[50];
  int archivos[5];
  for (int i = 0; i < num_bloques; i++) {
    cout << "Tamaño en kbs del bloque " + to_string(i + 1) + ": ";
    cin >> size;
    cout << "0 = Disponible \n1 = Ocupado \nEstado: ";
    cin >> est;
    cout << "\n";

    bloques[i].size = size;

    if (est == 0) {
      bloques[i].used = false;
    } else if (est == 1) {
      bloques[i].used = true;
    }
  }
  cout << "\n";
  for (int i = 0; i < 5; i++) {
    cout << "Tamaño en kbs del archivo " + to_string(i + 1) + ": ";
    cin >> size;
    archivos[i] = size;
  }

  do {
    cout << "\n\n";
    cout << "1 = Primer ajuste \n2 = Mejor ajuste \n3 = Peor ajuste "
            "\n\nAjuste: ";
    cin >> opc;
    switch (opc) {
      case 1:
        cout << "\n";
        primer_ajuste(bloques, archivos, num_bloques);
        break;
      case 2:
        cout << "\n";
        mejor_ajuste(bloques, archivos, num_bloques);
        break;
      case 3:
        cout << "\n";
        peor_ajuste(bloques, archivos, num_bloques);
        break;

      default:
        break;
    }
  } while (true);
}
