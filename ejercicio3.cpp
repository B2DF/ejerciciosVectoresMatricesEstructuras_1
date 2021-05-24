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
int factorial(int n){
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}


int main () {
    int valor = 0;

    leer("Ingrese un valor menor a 20", valor);
    int vector[valor] = {0};
    int fact[valor] = {0};

    cargarVector(vector, valor);

    for(int i = 0; i < valor; i++){
        fact[i]= factorial(vector[i]);
    }

    for (int i = 0; i < valor; i++){
        cout << "Posicion " << i << " vale: " << vector[i] << " y su factorial es: " << fact[i] << endl;
    }
    

 system("pause");
 return 0;
}