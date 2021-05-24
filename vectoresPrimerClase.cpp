#include <iostream>
using namespace std;


void mostrarVector(int vec[], int dimension){
    for(int i = 0; i < dimension; i++){
        cout << "Posicion : " << i << " - valor: " << vec[i] << endl;
    }
    return;
}

void cargarVector(int vec[], int dimension){
    for (int i = 0; i < dimension; i++){
        cout << "Ingrese un numero entero: " << endl;
        cin >> vec[i];
    }
}


int main () {
    int dimension = 0;

    cout << "Ingrese dimension del vector: " << endl;
    cin >> dimension;

    int numeros[dimension] = {0};

    mostrarVector(numeros, dimension);

    /*for (int i = 0; i < dimension; i++){
        cout << "Ingrese un numero entero: " << endl;
        cin >> numeros[i];
    }*/
    cargarVector(numeros, dimension);

    mostrarVector(numeros, dimension);

 system("pause");
 return 0;
}