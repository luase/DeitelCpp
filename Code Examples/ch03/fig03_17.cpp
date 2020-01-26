// Define la clase LibroCalificaciones con una función miembro llamada mostrarMensaje
// crea un objeto LibroCalifaciones y llama a su funcion mostrarMensaje.

#include "LibroCalificaciones.h"
#include <iostream>
using namespace std;

int main()
{
    LibroCalificaciones libroCalificaciones1("CS101 Introduccion a la programación en C++");
    LibroCalificaciones libroCalificaciones2("CS102 C++: Estruc de datos");

    cout << "el nombre inicial de libroCalificaciones1 es: "
	 << libroCalificaciones1.obtenerNombreCurso()
	 << "\nel nombre inicial de libroCalificaciones2 es: "
	 << libroCalificaciones2.obtenerNombreCurso()
	 << endl;

    libroCalificaciones1.establecerNombreCurso("CS101 Programación en C++");

    cout << "\nel nombre del curso de libroCalificaciones1 es: "
	 << libroCalificaciones1.obtenerNombreCurso()
	 << "\nel nombre del curso de libroCalificaciones2 es: "
	 << libroCalificaciones2.obtenerNombreCurso()
	 << endl;
}
