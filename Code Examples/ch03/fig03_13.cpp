// Define la clase LibroCalificaciones con una función miembro llamada mostrarMensaje
// crea un objeto LibroCalifaciones y llama a su funcion mostrarMensaje.

#include "LibroCalificaciones.h"
#include <iostream>
using namespace std;

int main()
{
    LibroCalificaciones libroCalificaciones1("CS101 Pyton");
    LibroCalificaciones libroCalificaciones2("CS101 C++");

    cout << "libroCalificaciones1 se creo para el curso: "
	 << libroCalificaciones1.obtenerNombreCurso()
	 << "\nlibroCalificaciones2 se creo para el curso: "
	 << libroCalificaciones2.obtenerNombreCurso()
	 << endl;
}
