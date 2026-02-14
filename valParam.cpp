#include "valParam.h"
#include <iostream>
using namespace std;

bool validarParametros(string comando, string params[], int cantidad)
{
    if (comando == "cargar_comandos")
        return validarCargar_comandos(params, cantidad);

    else if (comando == "cargar_elementos")
        return validarCargar_elementos(params, cantidad);

    else if (comando == "agregar_movimiento")
        return agregar_movimiento(params, cantidad);

    else if (comando == "agregar_analisis")
        return agregar_analisis(params, cantidad);

    else if (comando == "agregar_elemento")
        return agregar_elemento(params, cantidad);

    else if (comando == "guardar")
        return validar_guardar(params, cantidad);

    else if (comando == "simular_comandos")
        return validar_simular(params, cantidad);

    else if (comando == "ubicar_elementos")
        return validar_ubicar(params, cantidad);

    else if (comando == "en_cuadrante")
        return validar_cuadrante(params, cantidad);

    else if (comando == "crear_mapa")
        return validar_crearMapa(params, cantidad);

    else if (comando == "ruta_mas_larga")
        return validar_ruta(params, cantidad);

    else if (comando == "ayuda")
        return validar_ayuda(params, cantidad);

    else if (comando == "salir")
        return validar_salir(params, cantidad);

    else
    {
        cout << "Comando NO valido" << endl;
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

    if (params[0] == "")
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

    if (params[0] == "")
    {
        cout << "Nombre del archivo no encontrado" << endl;
        return false;
    }

    return true;

}

bool agregar_movimiento(string params[], int cantidad){

    if (cantidad!=3)
    {
        cout<<"Cantidad de parametros NO valida"<<endl;
        return false;
    }
    

    if (params[0]!="avanzar"||params[0]!="avanzar")
    {
        cout<<"El tipo de movimiento es incorrecto"<<endl;

        return false;
    }

    if (params[2]!="cm"||params[2]!="dm"||params[2]!="m"||params[2]!="km"||params[2]!="grd"||params[2]!="rad")
    {
        cout<<"Unidad de medida invalida"<<endl;
        return false;
    }

    return true;

}

bool agregar_analisis(string params[], int cantidad){

    if (cantidad!=2)
    {
        cout<<"Cantidad de parametros NO valida"<<endl;
        return false;
    }
    if (params[0]!="fotografiar"||params[0]!="composicion"||params[0]!="perforar")
    {
        cout<<"El tipo de analisis es incorrecto"<<endl;

        return false;
    }

    if (params[1] == "")
    {
        cout << "Objeto NO valido" << endl;
        return false;
    }
}

bool agregar_elemento(string params[], int cantidad){

    if (cantidad!=5)
    {
        cout<<"Cantidad de parametros NO valida"<<endl;
        return false;
    }

    if (params[2]!="roca"||params[2]!="crater"||params[2]!="monticulo"||params[2]!="duna")
    {
       cout<<"El tipo de componente NO es valido"<<endl;
       return false;
    }

}

bool validar_guardar(string params[], int cantidad){

}

bool validar_simular(string params[], int cantidad){

}

bool validar_ubicar(string params[], int cantidad){

}

bool validar_cuadrante(string params[], int cantidad){

}

bool validar_crearMapa(string params[], int cantidad){

}

bool validar_ruta(string params[], int cantidad){

}

bool validar_ayuda(string params[], int cantidad){

}

bool validar_salir(string params[], int cantidad){

}
