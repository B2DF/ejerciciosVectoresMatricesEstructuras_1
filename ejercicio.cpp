#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}


int main () {
    int cantidadElementos;
    int elementoMayor = -100000000;
    int posicionMayor;
   

    leer("Ingrese la cantidad de elementos (menos de 40)", cantidadElementos);
    int vector[cantidadElementos] = {0};
    
    for(int i = 0; i < cantidadElementos; i++){
        leer("Ingrese elemento: ", vector[i]);
    }

    for(int i = 0; i < cantidadElementos; i++){
        elementoMayor = vector[0];
        posicionMayor = 0;
        if(vector[i] > elementoMayor){
            elementoMayor = vector[i];
            posicionMayor = i + 1 ;
        }
    }
    


    cout << "El elemento " << elementoMayor << " es el maror y se repite " << elementoMayor << " veces." << endl;

    /*for(int i = 0; i < cantidadElementos; i++){
            cout << "vec[" << i << "] = " << vector[i];
    };*/

 system("pause");
 return 0;
}