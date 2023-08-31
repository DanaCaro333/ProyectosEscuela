#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;

void copy(string file_name, string new_file_name) {
  string line;
  ifstream ini_file{file_name};
  ofstream out_file{new_file_name};

  if (ini_file && out_file) {
    while (getline(ini_file, line)) {
      out_file << line << "\n";
    }
  } else {
    cout << strerror(errno) << endl;
  }

  ini_file.close();
  out_file.close();
}

int folder_arbol(string comando) {
  string dir_padre = comando.substr(0, comando.find("/"));
  int n_p = dir_padre.length();
  char char_padre[n_p];
  strcpy(char_padre, dir_padre.c_str());
  int status = mkdir(char_padre, 0777);
  const std::filesystem::path path_padre = dir_padre;
  comando.erase(0, n_p + 1);
  string dir_hijo = comando.substr(0, comando.find("/"));
  int n_h = dir_hijo.length();
  char char_hijo[n_h];
  auto path = std::filesystem::current_path();  // getting path
  path /= path_padre;
  std::filesystem::current_path(path);
  strcpy(char_hijo, dir_hijo.c_str());
  status = mkdir(char_hijo, 0777);
  const std::filesystem::path path_hijo = dir_hijo;
  path /= path_hijo;
  std::filesystem::current_path(path);
  return n_h + n_p + 2;
}

int main(int, char **) {
  bool i = true;
  string comando;
  do {
    getline(cin, comando);
    if (comando[0] == 'c' && comando[1] == 'p' && comando[2] == ' ') {
      comando.erase(0, 3);
      string file_name = comando.substr(0, comando.find(" "));
      string new_file_name = comando.substr(1 + file_name.length());
      copy(file_name, new_file_name);
    } else if (comando[0] == 'r' && comando[1] == 'm' && comando[2] == ' ' &&
               comando[3] == '-' && comando[4] == 'r' && comando[5] == 'f' &&
               comando[6] == ' ') {
      comando.erase(0, 7);
      const std::filesystem::path path = comando;
      try {
        std::filesystem::remove_all(path);
      } catch (exception &error) {
        cout << error.what() << endl;
      }

    } else if (comando[0] == 'm' && comando[1] == 'k' && comando[2] == 'd' &&
               comando[3] == 'i' && comando[4] == 'r' && comando[5] == ' ') {
      if (comando[6] == '-' && comando[7] == 'p' && comando[8] == ' ') {
        comando.erase(0, 9);
        int ajuste;
        auto back_path = std::filesystem::current_path();
        do {
          ajuste = folder_arbol(comando);
          comando.erase(0, ajuste);
        } while (comando.length() > 0);

        std::filesystem::current_path(back_path);

      } else {
        comando.erase(0, 6);
        int n = comando.length();
        char char_name[n + 1];
        strcpy(char_name, comando.c_str());
        int status = mkdir(char_name, 0777);
      }
    } else if (comando[0] == 'c' && comando[1] == 'a' && comando[2] == 't' &&
               comando[3] == ' ') {
      comando.erase(0, 4);
      ifstream archivo(comando.c_str());

      if (!archivo.fail()) {
        string linea;
        while (getline(archivo, linea)) {
          cout << linea << endl;
        }
      } else {
        cout << strerror(errno) << endl;
      }
    }
    comando.erase();
  } while (i == true);
}
