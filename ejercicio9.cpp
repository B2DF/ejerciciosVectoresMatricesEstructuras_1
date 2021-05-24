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
void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}
void arregloC(int vectorA[], int vectorB[], int dimension, int vectorC[]){
    int aux = dimension;
    for(int i = 0; i < dimension; i++){
        vectorC[i] = vectorA[i] + vectorB[aux - 1];                      
    }
    return;
}
void separacion(){
    cout << "###########################################################" << endl;
    cout << "###########################################################" << endl;
    return;
}


int main () {
    int dimension = 0;

    leer("Ingrese la dimension del conjunto, menor a 40", dimension);
    int vectorA[dimension] = {0};
    int vectorB[dimension] = {0};
    cargarVector(vectorA, dimension);
    separacion();

    cargarVector(vectorB, dimension);
    int vectorC[dimension] = {0};
    arregloC(vectorA, vectorB, dimension, vectorC);
    mostrarVector(vectorA, dimension);
    separacion();
    mostrarVector(vectorB, dimension);
    separacion();
    mostrarVector(vectorC, dimension);
 
 system("pause");
 return 0;
}