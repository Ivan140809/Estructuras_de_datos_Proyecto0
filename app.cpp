#include "app.h"
#include "comandos.h"
#include <iostream>
#include <string>

using namespace std;

void correr_app(){

string linea;

 while (true) {
 cout<< "$  "; // personalizacion segun linea de comandos del SO

 if (!getline(cin, linea)) { // validacion del comando principal si el usuario escribe algo raro
	 break;
   }

 if (linea.empty()) { // si la linea esta vacia se avanza, si el usuario da enter sobre todo
    continue;
   }

 if(procesador_linea(linea)) { // Procesa la linea retorna true si el usuario pidió salir
   break;
   }

  }
}
