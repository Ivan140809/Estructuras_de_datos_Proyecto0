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
