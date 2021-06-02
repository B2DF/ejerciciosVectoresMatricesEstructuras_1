/*Un establecimiento educativo que se encuentra lanzando una serie de cursos,
requiere de una aplicación que le permita inscribir a los participantes.

Para ello cuenta con una cantidad M de cursos a brindar a la comunidad.

Desarrollar una aplicación que permita:
    a. Registrar una cantidad M de cursos. El código de curso, deberá asignarse de manera automática y debe ser un número entero en el rango [1, M].
    b. Registrar una cantidad de N alumnos/as. Un alumno/a sólo puede inscribirse en un curso.
    c. Imprimir los datos de un alumno/a y el curso al que se inscribió. Para obtener los datos, se ingresará el dni de la persona.
    d. Dados 2 vectores de alumnos, ordenados por código de curso , uno con los datos de los alumnos del turno mañana y otro con los datos del turno tarde,
    imprimir por pantalla un listado con las siguientes características:
      
Curso: Programación 1
Alumno  Edad    Email   Teléfono
...
...
__________________________________
Total de alumnos del curso: 999
Promedio de edad del curso: 999

Curso: Programación 2
Alumno  Edad    Email   Teléfono
...
...
__________________________________
Total de alumnos del curso: 999
Promedio de edad del curso: 999



__________________________________
Total General de alumnos: 999
Promedio General de edades: 999

Restricciones:
    * El conjunto de cursos no puede ser recorrido secuencialmente.
    * Para los puntos a, b y c, el conjunto de alumnos/as sólo puede ser recorrido secuencialmente 1 vez.
*/



#include <iostream>
using namespace std;
typedef struct
{
    string nombre;
    int cantidadDeHoras;
} ST_CURSO;

typedef struct
{
    int dni;
    string nombre;
    int edad;
    string email;
    string telefono;
    int curso; // 1,2,...M
} ST_ALUMNE;

int main()
{

    system("pause");
    return 0;
}