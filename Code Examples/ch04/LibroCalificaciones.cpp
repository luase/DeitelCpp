// Definiciones de las funciones miembro de LibroCalificaciones. Este archivo
// contiene implementaciones de las funciones miembro cuyo prototipo está en
// LibroCalificaciones.h
#include "LibroCalificaciones.h"
#include <iomanip>
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

void LibroCalificaciones::determinarPromedioClase() const
{
    int total = 0;
    unsigned int contadorCalif = 0;

    cout << "Escriba la calificación o -1 para salir: ";
    int calificacion = 0;
    cin >> calificacion;

    while (calificacion != -1) {
	total = total + calificacion;
	contadorCalif = contadorCalif + 1;

	cout << "Escriba la calificación o -1 para salir: ";
	cin >> calificacion;
    }

    if (contadorCalif != 0) {
	double promedio = static_cast<double>(total) / contadorCalif;

	cout << "\nEl total de las " << contadorCalif << " calificaciones es " << total << endl;
	cout << setprecision(2) << fixed;
	cout << "El promedio de la clase es " << promedio << endl;
    } else
	cout << "No se introdujeron calificaciones" << endl;
}
