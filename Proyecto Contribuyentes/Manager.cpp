#include "Manager.h"
Manager::Manager() {}
int id = 0;
Manager::~Manager() {}
void Manager::agregar() {
  archivo.open("Contribuyentes.txt", ios::out | ios::app);

  cin.getline(nombre, 32, '\n');
  do {
    cout << "Nombre: ";
    cin.getline(nombre, 32, '\n');
    if (strlen(nombre) < 4) {
      cout << "ingrese un nombre valido\n";
    }
  } while (strlen(nombre) < 4);
  do {
    cout << "Apellido P: ";
    cin.getline(apellido[0], 32, '\n');
    if (strlen(apellido[0]) < 4) {
      cout << "ingrese un apellido peterno valido\n";
    }
  } while (strlen(apellido[0]) < 4);
  do {
    cout << "Apellido M: ";
    cin.getline(apellido[1], 32, '\n');
    if (strlen(apellido[1]) < 4) {
      cout << "ingrese un apellido maternio valido\n";
    }
  } while (strlen(apellido[1]) < 4);
  do {
    cout << "Teléfono: ";
    cin.getline(telefono, 12, '\n');
    if (strlen(telefono) != 10) {
      cout << "Ingrese un numero de telefono valido" << endl;
    }
  } while (strlen(telefono) != 10);
  cout << "Dirección:  ";
  cin.getline(direccion, 45, '\n');
  cout << "Ciudad:  ";
  cin.getline(ciudad, 32, '\n');
  do {
    cout << "Fecha de nacimiento (FORMATO: AAAA/MM/DD):  ";
    cin.getline(fechaNacimiento, 11, '\n');
    cout << strlen(fechaNacimiento);
    if (strlen(fechaNacimiento) != 10) {
      cout << "POR FAVOR INGRESE SU FECHA DE NACIMIENTO EN UN FORMATO VALIDO "
              "AAAA'/'MM'/'DD "
           << endl;
    }
  } while (strlen(fechaNacimiento) != 10);
  do {
    cout << "Estado Civíl: (1 caracter) ";
    cin >> estadoCivil;
    if (estadoCivil != 'c' && estadoCivil != 's') {
      cout << "Por favor ingrese un caracter valido" << endl;
    }
  } while (estadoCivil != 'c' && estadoCivil != 's');
  cout << "Dependientes:  ";
  cin >> dependientes;

  Contribuyente Persona;
  Persona.set_nombre(nombre);
  Persona.set_apellido(apellido);
  Persona.set_telefono(telefono);
  Persona.set_direccion(direccion);
  Persona.set_ciudad(ciudad);
  Persona.set_fechaNacimiento(fechaNacimiento);
  Persona.set_estadoCivil(estadoCivil);
  Persona.set_dependientes(dependientes);
  Persona.set_rfc();
  Persona.actualizar_mayusculas();
  Persona.actualizar_espacios();
  cout << Persona.get_nombre() << endl;
  archivo << id << " " << Persona.get_rfc() << "|" << Persona.get_nombre()
          << "|" << Persona.get_apellidoPaterno() << "|"
          << Persona.get_apellidoMaterno() << "|" << Persona.get_telefono()
          << "|" << Persona.get_direccion() << "|" << Persona.get_ciudad()
          << "|" << Persona.get_fechaNacimiento() << "|"
          << Persona.get_estadoCivil() << "|" << Persona.get_dependientes()
          << "\n";
  archivo.close();
  id++;
}

void Manager::menu() {
  do {
    system("clear");
    cout << "\n\t*----------------------*" << endl;
    cout << "\t|                      |" << endl;
    cout << "\t|   REGISTRO FEDERAL   |" << endl;
    cout << "\t|   DE CONTRIBUYENTES  |" << endl;
    cout << "\t|                      |" << endl;
    cout << "\t*----------------------*" << endl;
    cout << "1.- Registrar un nuevo contribuyente" << endl;
    cout << "2.- Consultar registro" << endl;
    cout << "3.- Salir" << endl;
    cin >> opc;
    system("clear");
    switch (opc) {
      case 1:
        agregar();
        break;
      case 2:
        arreglo_contribuyentes();
        system("clear");
        cout << "\n\t*----------------------*" << endl;
        cout << "\t|                      |" << endl;
        cout << "\t|       CONSULTAS      |" << endl;
        cout << "\t|                      |" << endl;
        cout << "\t*----------------------*" << endl;
        cout << "1.- Consultar por llave primaria" << endl;
        cout << "2.- Consultar por llave secundaria" << endl;
        cin >> opc;
        system("clear");
        switch (opc) {
          case 1:
            break;
          case 2:
            break;
        }
        break;
      default:
        break;
    }
  } while (opc != 3);
}

void Manager::rellenar_campos(char contribuyente[], int x) {
  int i = 0;
  int indice = 2;
  for (indice; contribuyente[indice] != '|'; indice++) {
    rfc[i] = contribuyente[indice];
    i++;
  }
  contribuyentes[x].set_rfc(rfc);
  i = 0;
  indice++;
  for (indice; contribuyente[indice] != '|'; indice++) {
    nombre[i] = contribuyente[indice];
    i++;
  }
  contribuyentes[x].set_nombre(nombre);
  i = 0;
  indice++;
  for (indice; contribuyente[indice] != '|'; indice++) {
    apellido[0][i] = contribuyente[indice];
    i++;
  }
  i = 0;
  indice++;
  for (indice; contribuyente[indice] != '|'; indice++) {
    apellido[1][i] = contribuyente[indice];
    i++;
  }
  contribuyentes[x].set_apellido(apellido);
  i = 0;
  indice++;
  for (indice; contribuyente[indice] != '|'; indice++) {
    telefono[i] = contribuyente[indice];
    i++;
  }
  contribuyentes[x].set_telefono(telefono);
  i = 0;
  indice++;
  for (indice; contribuyente[indice] != '|'; indice++) {
    direccion[i] = contribuyente[indice];
    i++;
  }
  contribuyentes[x].set_direccion(direccion);
  i = 0;
  indice++;
  for (indice; contribuyente[indice] != '|'; indice++) {
    ciudad[i] = contribuyente[indice];
    i++;
  }
  contribuyentes[x].set_ciudad(ciudad);
  i = 0;
  indice++;
  for (indice; contribuyente[indice] != '|'; indice++) {
    fechaNacimiento[i] = contribuyente[indice];
    i++;
  }
  contribuyentes[x].set_fechaNacimiento(fechaNacimiento);
  indice++;
  estadoCivil = contribuyente[indice];
  contribuyentes[x].set_estadoCivil(estadoCivil);
  indice++;
  dependientes = static_cast<int>(contribuyente[indice]);
  contribuyentes[x].set_dependientes(dependientes);
}

void Manager::arreglo_contribuyentes() {
  char contribuyente[300];
  ifstream archivoL;
  int x = 0;
  archivoL.open("Contribuyentes.txt", ios::in);
  if (archivoL.fail()) {
    cout << "No se pudo abrir el archivo...";
  }
  while (!archivoL.eof()) {
    archivoL.getline(contribuyente, 300, '\n');
    rellenar_campos(contribuyente, x);
    x++;
  }
}
