#include <iostream>
using namespace std;
#define MAX_FILAS 100
#define MAX_COLUMNAS 100

void cargarMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas){// cargar una matriz
    
    // hay que validar que filas es < MAX_FILAS 
    for (int  i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "Ingrese un valor: " << endl;
            cin >> matriz[i][j];
            cout << endl;
        }
         
    }
    return;
}

void imprimirMatriz(int matriz[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas){// imprime todas las posiciones de una matriz
        // hay que validar que filas es < MAX_FILAS 
    for (int  i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "El elemento de la posicion: (" << i << ", " << j << ") es :" << matriz[i][j] << endl;
  
        }
    }  
    return;  
}

void imprimirColumna(int matriz[MAX_FILAS][MAX_COLUMNAS], int columnas, int filas){
    
    for (int  i = 0; i < columnas; i++){
        for (int j = 0; j < filas; j++){
            cout << "el valor de la posicion: " << j << " de la columna es: " << matriz[j][i] << endl;

        }
    }
    return;
}

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}

int main () {
    int filas;
    int columnas;
    int contador = 0;
    float promedio = 0;



    leer("ingrese las filas de la primer matriz (menor que 30)", filas);
    leer("Ingrese las columnas de la primer matriz (menor que 25)", columnas);
    
    int matriz[filas][columnas] = {0};
    cargarMatriz(matriz, filas, columnas);
    imprimirColumna(matriz, columnas, filas);

    for (int  i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            contador += matriz[i][j];
        }
         
    }
    promedio = contador / (filas * columnas);

    cout << promedio << endl;
    



    



 system("pause");
 return 0;
}