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

void cargarVectorBoletas(ST_BOLETAS vec[], int dimension){
    while (vec[].numeroLegajo != 0){
        cout << "Ingrese Apellido: " << endl;
        cin >> vec[].apellido;
        cout << "ingrese el numero de legajo" << endl;
        cin >> vec[].numeroLegajo;
        cout << "ingrese el codigo de la materia" << endl;
        cin >> vec[].codigoMateria;
        cout << "ingrese el dia" << endl;
        cin >> vec[].dia;
        cout << "ingrese el mes" << endl;
        cin >> vec[].mes;
        cout << "ingrese el año" << endl;
        cin >> vec[].anio;
    }
}



int main () {
 
 system("pause");
 return 0;
}