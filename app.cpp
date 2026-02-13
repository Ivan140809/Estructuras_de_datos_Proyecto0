#include "app.h"
#include "comandos.h"
#include <iostream>
#include <string>

using namespace std;

void correr_app(){

string linea;

 while (true) {
 cout<< "grupo3@grupo3:$  " << endl; // personalizacion segun linea de comandos del SO

 if (!getline(cin, linea)) { // validacion del comando principal si el usuario escribe algo raro
	 break;
   }

 if (line.empty()) { // si la linea esta vacia se avanza, si el usuario da enter sobre todo
    continue;
   }

 if(procesamiento_comando(linea)) { // Procesa la linea retorna true si el usuario pidió salir
   break;
   }

  }
}
