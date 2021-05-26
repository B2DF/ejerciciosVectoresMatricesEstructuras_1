#include <iostream>
using namespace std;
#define MAX_FILAS 100
#define MAX_COLUMNAS 100

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}
void separacion(){
    cout << "###########################################################" << endl;
    cout << "###########################################################" << endl;
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
void imprimirMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas){// imprime todas las posiciones de una matriz
    for (int  i = 0; i < filas; i++){// hay que validar que filas es < MAX_FILAS 
        for (int j = 0; j < columnas; j++){
            cout << "El elemento de la posicion: (" << i << ", " << j << ") es :" << matriz[i][j] << endl;  
        }
    }  
    return;  
}
void sumatoriaDiagonalSuperior(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, int &sumatoriaS){
    sumatoriaS = 0;
    for(int i = 0; i < filas; i++){
        for(int j = i + 1; j < columnas; j++){
            sumatoriaS += matriz[i][j];
        }
    }
    return;
}
void sumatoriaDiagonalInferior(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, int &sumatoriaI){
    sumatoriaI = 0;
    for(int i = 1; i < filas; i++){
        for(int j = 0; j < i; j++){
            sumatoriaI += matriz[i][j];
        }
    }
    return;
}
void imprimirSuperior(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas){
    for(int i = 0; i < filas; i++){
        for(int j = i + 1; j < columnas; j++){
            cout << matriz[i][j] << "   ";
        }
        cout << endl;
    }
    return;
}
void imprimirInferior(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas){
    for(int i = 1; i < filas; i++){
        for(int j = 0; j < i; j++){
            cout << matriz[i][j] << "   ";
        }
        cout << endl;
    }
    return;
}
void primerCuadrante(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas){
    for(int i = 0; i < filas / 2; i++){
        for(int j = 0; j < columnas / 2; j++){
            
        }
    }
}
int main () {
 
 system("pause");
 return 0;
}