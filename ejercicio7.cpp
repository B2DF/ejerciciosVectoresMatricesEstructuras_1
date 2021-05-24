#include <iostream>
using namespace std;

/*7. Ingresar un valor entero N (< 15). A continuación ingresar un conjunto DATO de N elementos.
Generar otro conjunto de dos componentes MEJORDATO donde el primer elemento sea el mayor
valor de DATO y el segundo el siguiente mayor (puede ser el mismo si está repetido). Imprimir el
conjunto MEJORDATO con identificación.*/
void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}

/*void llenarVector(string mensaje, int dimension, int &vector[]){

    for(int i = 0; i < dimension; i++){
        leer("Ingrese elemento: ", vector[i]);
    }
}*/

/*void mejoresDatos(int array[dimension], int &primerMejor, int &segundoMejor){
    for(int i = 0; in < dimension; )
}*/

int main () {
    int dimension;
    int auxiliar = 0;
    int mayorValor;    
    int menorValor;

    leer("Ingrese un numero menor a 15", dimension);
    int vec[dimension] = {0};
    int vec2[2] = {0};

    for(int i = 0; i < dimension; i++){
        leer("Ingrese elemento: ", vec[i]);
    }
    mayorValor = vec[0];
    menorValor = vec[0];

    for(int i = 0; i < dimension; i++){
        
        if(vec[i] > mayorValor){
            menorValor = vec[i];
            vec2[1] = vec[i];
            mayorValor = vec[i];
            vec2[0] = vec[i];
            
        } else{
            if(vec[i] > menorValor ){
            menorValor = vec[i];
            vec2[1] = vec[i];
        }
        }

    }

    cout << "El maximo es: " << vec2[0] << " y el que le sigue: " << vec2[1] << endl;
 
 system("pause");
 return 0;
}