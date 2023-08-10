//MARIA DEL CIELO ESTRADA REYNA//
//
#include <iostream>
#include <fstream>
using namespace std;

/*
https://parzibyte.me/blog
*/

int main() {
    string nombreArchivo = "JCielito.txt";
    ifstream archivo(nombreArchivo.c_str());
    string linea;

    while (getline(archivo, linea)) {

        cout << "Una línea: ";
        cout << linea << endl;
    }
}
