// Define la clase LibroCalificaciones con una función miembro llamada mostrarMensaje
// crea un objeto LibroCalifaciones y llama a su funcion mostrarMensaje.

#include <iostream>
#include <string>
using namespace std;

class LibroCalificaciones {
public:
    void establecerNombreCurso(string nombre)
    {
	nombreCurso = nombre;
    }

    string obtenerNombrecurso() const
    {
	return nombreCurso;
    }

    void mostrarMensaje() const
    {
	cout << "Bienvenido al Libro de calificaciones para\n"
	     << obtenerNombrecurso() << "!" << endl;
    }

private:
    string nombreCurso;
};

int main()
{
    string nombreDelCurso;
    LibroCalificaciones miLibroCalificaciones;

    cout << "El nombre inicial del curso es:" << miLibroCalificaciones.obtenerNombrecurso() << endl;

    cout << "Escriba el nombre del curso:" << endl;
    getline(cin, nombreDelCurso);

    miLibroCalificaciones.establecerNombreCurso(nombreDelCurso);

    cout << endl;
    miLibroCalificaciones.mostrarMensaje();
}
