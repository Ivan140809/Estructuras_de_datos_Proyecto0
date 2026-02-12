#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

void listarComandos() {
    cout << "Comandos disponibles:"<<endl;
    cout << "  ayuda       - Muestra esta ayuda";
    cout << "  ayuda comando - Muestra ayuda en ejecucion de los comandos";
    cout << "  limpiar     - Limpia la consola ";
    cout << "  salir       - Finaliza el programa\n";
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Uso: ./programa <comando> ";
        cout << "Escribe './programa ayuda' para ver comandos disponibles, si nececita ayuda ";
        return 1;
    }

    string comando = argv[1];

    if (comando == "ayuda") {
        listarComandos();
    }
    else if (comando == "limpiar") {;
        system("clear");
    }
    else if (comando == "salir") {
        cout << "Saliendo del robotsito, que no se muera";
    }
    else {
        cout << "Comando no reconocido."<<endl;
        cout << "Escribe ./programa ayuda para ver opciones.\n";
    }

    return 0;
}
