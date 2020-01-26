// Definiciones de las funciones miembro de LibroCalificaciones. Este archivo
// contiene implementaciones de las funciones miembro cuyo prototipo está en
// LibroCalificaciones.h
#include "LibroCalificaciones.h"
#include <iostream>
using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre)
{
    establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    if (nombre.size() <= 25)
	nombreCurso = nombre;
    else {
	nombreCurso = nombre.substr(0, 25);
	cerr << "El nombre \"" << nombre << "\" excede la longitud máxima (25).\n"
					    "Se limitó nombreCurso a los primeros 25 caracteres.\n"
	     << endl;
    }
}

string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const
{
    cout << "Bienvenido al libro de calificaciones para\n"
	 << obtenerNombreCurso() << "!" << endl;
}
