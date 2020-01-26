// Define la clase LibroCalificaciones con una función miembro llamada mostrarMensaje
// crea un objeto LibroCalifaciones y llama a su funcion mostrarMensaje.

#include <iostream>
using namespace std;

class LibroCalificaciones {
public:
    void mostrarMensaje() const
    {
	cout << "Bienvenido al Libro de calificaciones!" << endl;
    }
};

int main()
{
    LibroCalificaciones miLibroCalificaciones;
    miLibroCalificaciones.mostrarMensaje();
}
