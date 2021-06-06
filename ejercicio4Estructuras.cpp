#include <iostream>
using namespace std;
#define MAX_BOLETAS 100
typedef struct{
    string apellido;
    int numeroLegajo;
    int codigoMateria;
    int dia;
    int mes;
    int anio;    
} ST_BOLETAS;

void imprimir(string mensaje, int valor){
    cout << mensaje << valor << endl;
    return;
}
void imprimir(string mensaje, string valor){
    cout << mensaje << valor << endl;
    return;
}
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
void cargarVectorBoletas(ST_BOLETAS vec[], int dimension){
    for(int i = 0; i < dimension; i++){
        leer("Ingrese el apellido: ",vec[i].apellido);
        leer("Ingrese el número de legajo: ", vec[i].numeroLegajo);
        leer("Ingrese el codigo de la materia: ", vec[i].codigoMateria);
        leer("Ingrese el dia: ", vec[i].dia);
        leer("Ingrese el mes: ", vec[i].mes);;
        leer("Ingrese el año: ", vec[i].anio);
        return;
    }    
}



int main () {
 
 system("pause");
 return 0;
}