#include <iostream>
using namespace std;
void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}
void cargarVector(int vec[], int dimension){
    for (int i = 0; i < dimension; i++){
        cout << "Ingrese un numero entero: " << endl;
        cin >> vec[i];
    }
}
void mostrarVector(int vec[], int dimension){
    for(int i = 0; i < dimension; i++){
        cout << "Posicion : " << i << " - valor: " << vec[i] << endl;
    }
    return;
}



int main () {
    int valor = 0;
    
    leer("Ingrese un valor menor a 25", valor);
    int vector[valor] = {0};

    cargarVector(vector, valor);
    mostrarVector(vector, valor);
    


 system("pause");
 return 0;
}