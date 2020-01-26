// Define la clase LibroCalificaciones con una función miembro llamada mostrarMensaje
// crea un objeto LibroCalifaciones y llama a su funcion mostrarMensaje.

#include <iostream>
#include <string>
using namespace std;

class LibroCalificaciones {
public:
    void mostrarMensaje(string nombreCurso) const
    {
	cout << "Bienvenido al Libro de calificaciones para\n"
	     << nombreCurso << "!" << endl;
    }
};

int main()
{
    string nombreDelCurso;
    LibroCalificaciones miLibroCalificaciones;

    cout << "Escriba el nombre del curso:" << endl;
    getline(cin, nombreDelCurso);

    miLibroCalificaciones.mostrarMensaje(nombreDelCurso);
}
