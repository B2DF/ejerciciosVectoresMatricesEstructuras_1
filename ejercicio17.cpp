#include <iostream>
using namespace std;
#define MAX_FILAS 100
#define MAX_COLUMNAS 100

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}
void cargarMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas){// cargar una matriz
    if(filas >= columnas){
        for (int  i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
            cout << "Ingrese un valor: " << endl;
            cin >> matriz[i][j];
            cout << endl;
            }
        }
    }
    return;
}
void imprimirPorColumnas(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas){
    for(int j = 0; j < columnas; j++){
        for(int i = 0; i < filas; i++){
            cout << matriz[i][j] << "   ";
        }
        cout << endl;
    }
    return;
}
void calcularPromedio(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas){
    int contador = 0;
    float promedio = 0;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            contador += matriz[i][j];
        }
    }
    promedio = contador / (filas * columnas);
    cout << "El promedio es de: " << promedio << endl;
    return;     
}
void vectorporColumnas(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, int vectorC[]){
    for(int j = 0; j < columnas; j++){
        int auxiliar = 0;
        for(int i = 0; i < filas; i++){
            auxiliar += matriz[i][j];
            vectorC[j] = auxiliar;
        }
    }
    return;
}

void valorMaximoFila(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, int vectorD[]){
    int auxiliar = 0;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            if(matriz[i][j] > auxiliar || auxiliar == 0){
                auxiliar = matriz[i][j];
                vectorD[i] = auxiliar;
            }
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
        cout << "Posicion : " << i << " - valor: " << vec[i] << endl;
    }
    return;
}

int main () {
    int filas;
    int columnas;
    
    leer("Ingrese una cantidad de filas menor a 30", filas);
    leer("Ingrese una cantidad de columnas menor a 25", columnas);
    int matriz[MAX_FILAS][MAX_COLUMNAS] = {0};

    cargarMatriz(matriz, filas, columnas);
    separacion();
    imprimirPorColumnas(matriz, filas, columnas);
    separacion();
    calcularPromedio(matriz, filas, columnas);
    separacion();
    int vector[columnas];
    vectorporColumnas(matriz, filas, columnas, vector);
    mostrarVector(vector, columnas);
    separacion();
    int vectorB[filas];
    valorMaximoFila(matriz, filas, columnas, vectorB);
    mostrarVector(vectorB, columnas);

 system("pause");
 return 0;
}