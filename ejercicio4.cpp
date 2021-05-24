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
void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}



int main () {
    int valor = 0;
    int sumatoriaPrincipal = 0;
    int sumatoriaSecundaria = 0;

    leer("Ingrese un valor menor que 25", valor);
    int matriz[valor][valor] = {0};

    cargarMatriz(matriz, valor, valor);

    for(int i = 0;i < valor; i++){
        sumatoriaPrincipal += matriz[i][i];
        sumatoriaSecundaria += matriz[i][(valor - 1) - i];
        /*for(int j = 0; j < valor; j++){
            if( i == j){
                contador += matriz[i][j];
            }
            if(i + j == valor -1){
                contador2 += matriz[i][j];
            }
            if(i + j < valor / 2 ){

            }
        }*/
    }

    if (sumatoriaPrincipal > sumatoriaSecundaria){
        cout << "Sumatoria principales mayor: " << sumatoriaPrincipal << endl;
        for(int i = 0; i < valor; i++){
            cout << matriz[i][i] << " ";
        }
    }else{
        cout << "Sumatoria secundaria mayor: " << sumatoriaSecundaria << endl;
        for(int i = 0; i < valor; i++){
            cout << matriz[i][(valor - 1) - i] << " ";
        }
    }
    int sumatoriaCuarto1 = 0;
    for(int i = 0; i < valor / 2; i++){
        for(int j = 0; j < valor / 2; j++){
            cout << matriz[i][j] << "\t";
            sumatoriaCuarto1 += matriz[i][j];
        }
        cout << endl << endl;
    }
    int sumatoriaCuarto2 = 0;
    for(int i = 0; i < valor / 2; i++){
        for(int j = valor / 2; j < valor; j++){
            cout << matriz[i][j] << "\t";
            sumatoriaCuarto2 += matriz[i][j];
        }
        cout << endl << endl;
    }
    int sumatoriaCuarto3 = 0;
    for(int i = valor / 2; i < valor; i++){
        for(int j = 0; j < valor / 2; j++){
            cout << matriz[i][j] << "\t";
            sumatoriaCuarto3 += matriz[i][j];
        }
        cout << endl << endl;
    }
    int sumatoriaCuarto4 = 0;
    for(int i = valor / 2; i < valor; i++){
        for(int j = valor / 2; j < valor; j++){
            cout << matriz[i][j] << "\t";
            sumatoriaCuarto4 += matriz[i][j];
        }
        cout << endl << endl;
    }

    if(sumatoriaCuarto1 > sumatoriaCuarto2 > sumatoriaCuarto3 > sumatoriaCuarto4){
         for(int i = 0; i < valor / 2; i++){
        for(int j = 0; j < valor / 2; j++){
            cout << matriz[i][j] << "\t";
        }
    }
    }else{
        if(sumatoriaCuarto2 > sumatoriaCuarto1 > sumatoriaCuarto3 > sumatoriaCuarto4){
            for(int i = 0; i < valor / 2; i++){
                for(int j = valor / 2; j < valor; j++){
                 cout << matriz[i][j] << "\t";
                }
            }
        }else{
            if( sumatoriaCuarto3 > sumatoriaCuarto4 > sumatoriaCuarto1 > sumatoriaCuarto2){

            }else{

            }
        }
    }


 system("pause");
 return 0;
}