#include <iostream>
using namespace std;

void apareo(int vecA[], int n, int vecB[], int m, int vecC[], int &k)
{
    // Contadores para la posicion de los vectores A y B.
    int i = 0, j = 0;
    // Contador para posicionarse en el vector resultante.
    k = 0;
    // Mientras pueda comparar valores (al menos uno de los vectores tiene
valor)
while (i < n && j < m)
{
    // Comparo los valores de los vectores
    if (vecA[i] < vecB[j])
    {
        // Coloco el elemento de A porque es menor
        vecC[k] = vecA[i];
        // Me muevo en el vector A
        i++;
    }
    else
    {
        vecC[k] = vecB[j];
        j++;
    }
    // Incremento el contador de la posicion del vector resultante
    k++;
}
// Paso todos los elementos restantes de A
while (i < n)
{
    vecC[k] = vecA[i];
    i++;
    k++;
}
// Paso todos los elementos restantes de B
while (j < m)
{
    vecC[k] = vecB[j];
    j++;
    k++;
}
}

int main()
{

    system("pause");
    return 0;
}