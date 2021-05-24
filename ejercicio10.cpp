#include <iostream>
using namespace std;
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
void conjuntoMenor(int dimension, int dimensionB, int &dimensionCM){
    if(dimension <= dimensionB){
        dimensionCM = dimension;
    } else {
        dimensionCM = dimensionB;
    }
    return;
}
void conjuntoC(int vectorA[], int vectorB[], int dimensionCM, int vectorC[]){     
    for (int i = 0; i < dimensionCM; i++){
        vectorC[i] = vectorA[i] + vectorB[i];        
    }
    return;
}
void conjuntoDDim(int vectorA[], int vectorB[], int dimensionCM, int &dimensionD){
    for (int i = 0; i < dimensionCM; i++){
        if(vectorA[i] != 0 && vectorB[i] != 0){
            dimensionD += 1;
        }        
    }
    return;
}
void conjuntoD(int vectorA[], int vectorB[], int dimensionD, int vectorD[]){
    for (int i = 0; i < dimensionD; i++){
        if(vectorA[i] != 0 && vectorB[i] != 0){
            vectorD[i] = vectorA[i] + vectorB[i];
        }        
    }
    return;
}
void separacion(){
    cout << "###########################################################" << endl;
    cout << "###########################################################" << endl;
    return;
}
void mostrarVector(int vec[], int dimension){
    for(int i = 0; i < dimension; i++){
        cout << "Posicion : " << i + 1 << " - valor: " << vec[i] << endl;
    }
    return;
}
int main () {
    int dimension;
    int dimensionB;
    int dimensionCM;
    int dimensionD = 0;


    leer("Ingrese un valor menor a 10", dimension);
    int vectorA[dimension] = {0};
    leer("Ingrese un valor menor a 15", dimensionB);
    int vectorB[dimensionB] = {0};
    separacion();
    cargarVector(vectorA, dimension);
    separacion();
    cargarVector(vectorB, dimensionB);
    conjuntoMenor(dimension, dimensionB, dimensionCM);
    int vectorC[dimensionCM];
    conjuntoC(vectorA, vectorB, dimensionCM, vectorC);
    conjuntoDDim(vectorA, vectorB, dimensionCM, dimensionD);
    int vectorD[dimensionD];
    conjuntoD(vectorA, vectorB, dimensionD, vectorD);
    mostrarVector(vectorC, dimensionCM);
    separacion();
    mostrarVector(vectorD, dimensionD);
    
 system("pause");
 return 0;
}