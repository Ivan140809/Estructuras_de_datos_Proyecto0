#include <iostream>
#include <string>
using namespace std;

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
