#include "comandos.h"
#include "ayuda.h"
#include "valParam.h"
#include <iostream>
#include <sstream>
#include <iostream>
using namespace std;

// Aca se hace toooda la logica de las funciones, cuando se haga la entrega 1,2,3 correspondientemente


bool comandoexacto(string& linea, char* entrada){ //esta funcion me verifica si es exactamente el comando para ejecutarse si no es asi manda falso y genera un mensaje de error 
   if(entrada==linea){
   return true
 }

bool procesador_linea(string& linea){

//funcion salir

if(comandoexacto(linea, "salir"){
   return true;
}

