#include "valParam.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool esNumero(const string& s) { // Nota: Este código fue desarrollado con asistencia de Claude (IA de Anthropic) para generar mejor con librerias la funcion de verificacion del numero.
    if (s.empty()) return false;
    char* end = nullptr;
    strtod(s.c_str(), &end);
    return end && *end == '\0';
}


bool validarParametros(string comando, string params[], int cantidad)
{
    if (comando == "cargar_comandos")
    {
        if (validarCargar_comandos(params, cantidad)){

            cout << "Resultado exitoso, se cargaron los comandos" << endl;
        }
    }
    else if (comando == "cargar_elementos")

        if (validarCargar_elementos(params, cantidad)){

            cout << "Resultado exitoso, se cargaron los elementos" << endl;
        }

    else if (comando == "agregar_movimiento")

        if(agregar_movimiento(params, cantidad)){

            cout << "Resultado exitoso, se agrego el movimiento" << endl;

        }

    else if (comando == "agregar_analisis")

        if(agregar_analisis(params, cantidad)){

            cout << "Resultado exitoso, se agrego el analisis" << endl;
        }

    else if (comando == "agregar_elemento")

        if(agregar_elemento(params, cantidad)){

            cout << "Resultado exitoso, se agrego el elemento" << endl;
        }

    else if (comando == "guardar")
        if(validar_guardar(params, cantidad)){

            cout << "Resultado exitoso, se guardo correctamente" << endl;
        }

    else if (comando == "simular_comandos")
        if(validar_simular(params, cantidad)){

            cout << "Resultado exitoso, comandos simulados" << endl;
        }

    else if (comando == "ubicar_elementos")
        if(validar_ubicar (params, cantidad)){

            cout << "Resultado exitoso, se ubicaron los elementos" << endl;
        }

    else if (comando == "en_cuadrante")
        if(validar_cuadrante(params, cantidad)){

            cout << "Resultado exitoso, se realizo el cuadrante" << endl;
        }

    else if (comando == "crear_mapa")
        if(validar_crearMapa(params, cantidad)){

            cout << "Resultado exitoso, se creo el mapa" << endl;
        }

    else if (comando == "ruta_mas_larga")
        if(validar_ruta(params, cantidad)){

            cout << "Resultado exitoso, se encontro la ruta mas larga" << endl;
        }

    else if (comando == "ayuda")
        if(validar_ayuda(params, cantidad)){

            cout << "Resultado exitoso." << endl;
        }

    else if (comando == "salir")
        if(validar_salir(params, cantidad)){

            cout << "Resultado exitoso, saliendo" << endl;
        }

    else
    {
        cout << "Comando no valido" << endl;
        return false;
    }
}


bool validarCargar_comandos(string params[], int cantidad)
{
    if (cantidad != 1)
    {
        cout << "Cantidad de parametros incorrecta"<<endl;
        return false;
    }

    if (params[0].empty())
    {
        cout << "Nombre del archivo no encontrado" << endl;
        return false;
    }

    return true;
}

bool validarCargar_elementos(string params[], int cantidad){

    if (cantidad != 1)
    {
        cout << "Cantidad de parametros incorrecta"<<endl;
        return false;
    }

    if (params[0].empty())
    {
        cout << "Nombre del archivo no encontrado" << endl;
        return false;
    }

    return true;

}

bool validar_agregar_movimiento(string params[], int cantidad){

    if (cantidad!=3)
    {
        cout<<"Cantidad de parametros no valida"<<endl;
        return false;
    }
    string tipo = params[0];
    string magn = params[1];
    string uni  = params[2];

    if ( tipo!="avanzar" && tipo != "girar")
    {
        cout<<"El tipo de movimiento es incorrecto"<<endl;

        return false;
    }

    if (!esNumero(magn)) {
        cout << "Magnitud invalida" << endl;
        return false;
    }

    if (tipo == "avanzar") {
        if (uni != "cm" && uni != "dm" && uni != "m" && uni != "km") {
            cout << "Unidad de medida invalida" << endl;
            return false;
        }
   } else{ //girar
     if (uni != "grd" && uni != "rad") {
            cout << "Unidad de medida invalida" << endl;
            return false;
	}
   }
    return true;
}

bool validar_agregar_analisis(string params[], int cantidad){

    if (cantidad!=2 && cantidad!=3)
    {
        cout<<"Cantidad de parametros no valida"<<endl;

        return false;
    }
    string tipo = params[0];
    string objeto  = params[1];

    if ( tipo!="fotografiar" && tipo != "composicion" && tipo!="perforar")
    {
        cout<<"El tipo de analisis es incorrecto"<<endl;

        return false;
    }

    if (objeto.empty())
    {
        cout << "Objeto no valido" << endl;
        return false;
    }

    if(cantidad==3) {
    if(params[2].empty()){
	cout << "Comentario no valido" << endl;
            return false;
	}
    }
  return true;
}

bool validar_agregar_elemento(string params[], int cantidad){

    if (cantidad!=5)
    {
        cout<<"Cantidad de parametros no valida"<<endl;
        return false;
    }
    string tipo   = params[0];
    string tam    = params[1];
    string unidad = params[2];
    string x      = params[3];
    string y      = params[4];

    if (tipo != "roca" && tipo != "crater" && tipo != "monticulo" && tipo != "duna")
    {
       cout<<"El tipo de componente no es valido"<<endl;
       return false;
    }
   if(!esNumero(tam)) {
   cout<<"Tamano invalido"<<endl;
   return false;
}
  if (unidad != "cm" && unidad != "dm" && unidad != "m" && unidad != "km") {
        cout << "Unidad de medida invalida" << endl;
        return false;
    }
  if (!esNumero(x) || !esNumero(y)) {
        cout << "Coordenadas invalidas" << endl;
        return false;
    }
   return true;
}

bool validar_guardar(string params[], int cantidad){

    if( cantidad != 2){
        
        cout<< "El formato no es valido"<<endl;
    }

    string tipo = params[0];
    string archivo = params[1];

    if (tipo!= "comandos" && tipo!= "elementos") {
        
        cout << "Tipo de archivo invalido, solo usar 'comandos' o 'elementos'" << endl;

        return false;
    }

    if (archivo.empty())
    {
        cout << "Nombre del archivo no encontrado" << endl;
        return false;
    }

    return true;
}

bool validar_simular(string params[], int cantidad){

    if (cantidad !=2) {
        cout << "Cantidad de parametros incorrecta" << endl;
        return false;
    }

    string x = params[0];
    string y = params[1];

    if (!esNumero(x) || !esNumero(y)) {
        cout << "Coordenadas invalidas" << endl;
        return false;
    }
    return true;
}

bool validar_ubicar(string params[], int cantidad){

    if (cantidad !=1) {
        cout << "Cantidad de parametros incorrecta" << endl;
        return false;
    }

    return true;

}

bool validar_cuadrante(string params[], int cantidad){

	if (cantidad != 4) {
        cout << "Cantidad de parametros incorrecta" << endl;
        return false;
    }
if (!esNumero(params[0]) || !esNumero(params[1]) || !esNumero(params[2]) || !esNumero(params[3])) {
        cout << "Parametros invalidos, solo numericos" << endl;
        return false;
    }
    double x1 = stod(params[0]);
    double x2 = stod(params[1]);
    double y1 = stod(params[2]);
    double y2 = stod(params[3]);

	if (!(x1 < x2 && y1 < y2)) {
        cout << "Rango invalido debe cumplirse que x1<x2 y y1<y2" << endl;
        return false;
    }

   return true;
}

bool validar_crearMapa(string params[], int cantidad){
 	if (cantidad != 1) {
        cout << "Cantidad de parametros incorrecta" << endl;
        return false;
    }

    if (!esNumero(params[0])) {
        cout << "Coeficiente invalido" << endl;
        return false;
    }

    return true;
}

bool validar_ruta(string params[], int cantidad){
 	if (cantidad != 0) {
        cout << "Cantidad de parametros incorrecta" << endl;
        return false;
    }
    return true;
}

bool validar_ayuda(string params[], int cantidad){

	if (cantidad != 0 && cantidad != 1) { //para ayuda y ayuda comando
        cout << "Cantidad de parametros incorrecta" << endl;
        return false;
    }

	if (cantidad == 1 && params[0].empty()) {
        cout << "Comando para ayuda no valido" << endl;
        return false;
    }
    return true;
}

bool validar_salir(string comando){

    if (comando=="salir")
    {
        return true;

    }else{

        cout<<"Comando no valido"<<endl;
        return false;
    }

    return false;

}
