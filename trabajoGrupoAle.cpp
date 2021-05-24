#include <iostream>
using namespace std;

typedef struct {
    string nombre;
    int cantidadDeHoras;
} ST_CURSO;

typedef struct {
    int dni;
    string nombre;
    int edad;
    string email;
    string telefono;
    int curso; // 1,2,...M
} ST_ALUMNE;

void cargarVectorCurso(ST_CURSO vec[], int dimension){
    for (int i = 0; i < dimension; i++){
        cout << "Ingrese nombre del curso: " << endl;
        cin >> vec[i].nombre;
        cout << "ingrese la cantidad de horas que dura" << endl;
        cin >> vec[i].cantidadDeHoras;
    }
}
void cargarVectorAlumno(ST_ALUMNE vec[], int dimension){
    for (int i = 0; i < dimension; i++){
        cout << "Ingrese el DNI: " << endl;
        cin >> vec[i].dni;
        cout << "ingrese el nombre" << endl;
        cin >> vec[i].nombre;
        cout << "Ingrese la edad: " << endl;
        cin >> vec[i].edad;
        cout << "Ingrese el email: " << endl;
        cin >> vec[i].email;
        cout << "Ingrese el telefono: " << endl;
        cin >> vec[i].telefono;
        vec[i].curso = i + 1;
    }
}
void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}
 void burbujeo(ST_ALUMNE arr[], int n){
        int i;
        int j;
        int aux;
        for (i = 0; i < n-1; i++) {
            // Los ultimos i elementos ya estan ordenados
                for (j = 0; j < n-i-1; j++) {
                    if (arr[j].dni > arr[j+1].dni) {
                        aux = arr[j].dni;
                        arr[j].dni = arr[j+1].dni;
                        arr[j+1].dni = aux;
                    }
                }
            }
        }
int busquedaBinaria(ST_ALUMNE arr[], int n, int x) {
// Cuando arranco evalúo todo el vector de 0 a n - 1
    int inicio = 0;
    int fin = n -1;
    while (fin >= inicio) {
        int mitad = inicio + (fin - inicio) / 2;
        // Si el elemento es el del medio, devolvemos la posicion
        if (arr[mitad].dni == x){
        return mitad ;
        }// Si el elemento es menor entonces solo puede estar en la primer mitad
        if (arr[mitad].dni > x) {
        fin = mitad - 1; //Cambio el limite superior
        } else {
        inicio = mitad + 1; // Cambio el limite inferior
    }
    }
    // Si llegamos hasta aca es que el elemento no estaba
    return -1;
}

/*Un establecimiento educativo que se encuentra lanzando una serie de cursos, 
requiere de una aplicación que le permita inscribir a los participantes.

Para ello cuenta con una cantidad M de cursos a brindar a la comunidad.

Desarrollar una aplicación que permita:
    * Registrar una cantidad M de cursos. El código de curso, deberá asignarse de manera automática y debe ser un número entero en el rango [1, M].
    * Registrar una cantidad de N alumnos/as. Un alumno/a sólo puede inscribirse en un curso.
    * Imprimir los datos de un alumno/a y el curso al que se inscribió. Para obtener los datos, se ingresará el dni de la persona.

Restricciones:
    * El conjunto de cursos no puede ser recorrido secuencialmente.
    * El conjunto de alumnos/as sólo puede ser recorrido secuencialmente 1 vez*/



int main () {
    int cantidadCursos = 0;
    int cantidadAlumnos = 0;
    int dNI = 0;
    int busqueda = -1;
    

    leer("Ingrese la cantidad de cursos", cantidadCursos);
    ST_CURSO curso[cantidadCursos];   

    leer("Ingrese la cantidad de Alumnos", cantidadAlumnos);
    ST_ALUMNE alumnos[cantidadAlumnos];

    cargarVectorCurso(curso, cantidadCursos);
    cargarVectorAlumno(alumnos, cantidadAlumnos);
    burbujeo(alumnos, cantidadAlumnos);
    
    leer("ingrese el DNI de la persona a buscar: ", dNI);
    busqueda = busquedaBinaria(alumnos, cantidadAlumnos, dNI);

    cout << "Los datos del alumno son : " << alumnos[busqueda].dni << endl;
    cout << "El curso al que se inscribio es: " << curso[busqueda].nombre << endl;
    // hacer cout`s por cada valor y arreglar la linea 118 para ver porque no es busqueda - 1
    // puede ser porque la posicion del array que ocupa alumnos[busqueda - 1].curso no es la misma del resultado de la busqueda, ojo al piojo

 system("pause");
 return 0;
}