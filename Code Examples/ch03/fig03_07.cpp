// Define la clase LibroCalificaciones con una función miembro llamada mostrarMensaje
// crea un objeto LibroCalifaciones y llama a su funcion mostrarMensaje.

#include <iostream>
#include <string>
using namespace std;

class LibroCalificaciones {
public:
    explicit LibroCalificaciones(string nombre)
	: nombreCurso(nombre)
    {
    }

    void establecerNombreCurso(string nombre)
    {
	nombreCurso = nombre;
    }

    string obtenerNombreCurso() const
    {
	return nombreCurso;
    }

    void mostrarMensaje() const
    {
	cout << "Bienvenido al Libro de calificaciones para\n"
	     << obtenerNombreCurso() << "!" << endl;
    }

private:
    string nombreCurso;
};

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
