#include <iostream>
using namespace std;

typedef struct {
    int dia;
    int mes;
    int anio;
}ST_FECHA;

typedef struct {
    string nombre;
    ST_FECHA fecha;
}ST_NOMBRE;

typedef struct {
    int nota1;
    int nota2;
    int nota3;
}ST_CALIFICACIONES;

typedef struct {
    string nombre;
    string apellido;
}ST_NOMBRES;

typedef struct {
    int legajo;
    ST_NOMBRES nombreYap;
    ST_CALIFICACIONES calificaciones;;
}ST_LEGAJO;
void leer(string mensaje, string valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}
void leer(string mensaje, int valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}

void llenarNombre(ST_NOMBRE vec[], int dimension){
    for(int i = 0; i < dimension; i++){
        leer("Ingrese el nombre", vec[i].nombre);
        leer("Ingrese el dia", vec[i].fecha.dia);
        leer("Ingrese mes", vec[i].fecha.mes);
        leer("Ingrese el año", vec[i].fecha.anio);
        return;
    }
}
void llenarLegajo(ST_LEGAJO vec[], int dimension){
    for(int i = 0; i < dimension; i++){
        leer("Ingrese un legajo", vec[i].legajo);
        leer("Ingrese un apellido", vec[i].nombreYap.apellido);
        leer("Ingrese un nombre", vec[i].nombreYap.apellido);
        leer("Ingrese la primer nota", vec[i].calificaciones.nota1);
        leer("Ingrese la segunda nota", vec[i].calificaciones.nota2);
        leer("Ingrese la ultima nota", vec[i].calificaciones.nota3);
        return;        
    }
}
void imprimir(string mensaje, int valor){
    cout << mensaje << valor << endl;
    return;
}
void imprimir(string mensaje, string valor){
    cout << mensaje << valor << endl;
    return;
}

void imprimirNombre(ST_NOMBRE vec[], int dimension){
    for(int i = 0; i < dimension; i++){
        imprimir("el nombre es: ", vec[i].nombre);
        imprimir("El dia es: ", vec[i].fecha.dia);
        imprimir("El mes es: ", vec[i].fecha.mes);
        imprimir("El año es: ", vec[i].fecha.anio);
        return;
    }
}
void ImprimirLegajo(ST_LEGAJO vec[], int dimension){
    for(int i = 0; i < dimension; i++){
        imprimir("El lejajo es el: ", vec[i].legajo);
        imprimir("El nombre es: ", vec[i].nombreYap.nombre);
        imprimir("El apellido es: ", vec[i].nombreYap.apellido);
        imprimir("La primer nota es: ", vec[i].calificaciones.nota1);
        imprimir("La segunda nota es: ", vec[i].calificaciones.nota2);
        imprimir("La tercer nota es: ", vec[i].calificaciones.nota3);
        return;
    }
}
int main () {
    int dimension = 0;
    int dimensionLegajos = 0;

    leer("ingrese la cantidad de nombres: ", dimension);
    ST_NOMBRE vector[dimension];
    leer("Ingrese la cantidad de legajos: ", dimensionLegajos);
    ST_LEGAJO vector2[dimensionLegajos];
    llenarNombre(vector, dimension);
    imprimirNombre(vector, dimension);
    llenarLegajo(vector2, dimensionLegajos);
    ImprimirLegajo(vector2, dimensionLegajos);
 system("pause");
 return 0;
}