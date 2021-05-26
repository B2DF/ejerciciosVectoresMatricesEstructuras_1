#include <iostream>
using namespace std;
void cargarVector(int vec[], int dimension){
    for (int i = 0; i < dimension; i++){
        cout << "Ingrese un numero entero ordenado ascendentemente: " << endl;
        cin >> vec[i];
    }
}
void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}
int busquedaBinaria(int vector[], int n, int x) {
// Cuando arranco evalúo todo el vector de 0 a n - 1
    int inicio = 0;
    int fin = n -1;
    while (fin >= inicio) {
        int mitad = inicio + (fin - inicio) / 2;
        // Si el elemento es el del medio, devolvemos la posicion
        if (vector[mitad] == x){
        return mitad ;
        }// Si el elemento es menor entonces solo puede estar en la primer mitad
        if (vector[mitad] > x) {
        fin = mitad - 1; //Cambio el limite superior
        } else {
        inicio = mitad + 1; // Cambio el limite inferior
    }
    }
    // Si llegamos hasta aca es que el elemento no estaba
    return -1;
}
void buscandoPosicion(int vector[], int dimension, int pesquisa, int &posicionMayorOMenor){
    for(int i = 0; i < dimension; i++){
        if(vector[i] <= pesquisa){
            posicionMayorOMenor += 1;
        }        
    }
}
void separacion(){
    cout << "###########################################################" << endl;
    cout << "###########################################################" << endl;
    return;
}

int main () {
    int dimension;
    int pesquisa;
    int posicion = - 1;
    int posicionMayorOMenor = 0;

    leer("Ingrese la dimension del vector menor a 40", dimension);
    int refer[dimension];
    cargarVector(refer, dimension);
    separacion();
    leer("Ingrese un valor a buscar", pesquisa);
    posicion = busquedaBinaria(refer, dimension, pesquisa);
    buscandoPosicion(refer, dimension, pesquisa, posicionMayorOMenor);
    if(posicion > - 1){
        cout << "El elemento se encuentra en la posicion" << pesquisa << endl;        
    }
    if(posicionMayorOMenor > 0 && posicion == - 1){
        cout << "El elemento buscado esta entre las posiciones " << posicionMayorOMenor -1 << " y la " << posicionMayorOMenor << endl;
    }
    if(pesquisa < refer[0]){
        cout << "El elemento buscado es menor que el primero" << endl;
    } else{
        if (pesquisa > refer[dimension -1]){
            cout << "El elemento buscado es mayor que el ultimo" << endl;
        }
    }
 system("pause");
 return 0;
}