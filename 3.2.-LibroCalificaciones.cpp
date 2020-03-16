#include "pch.h"
#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre)
{
	establecerNombreCurso(nombre);
}

//Valida que ahora el nombre tenga 25 caracteres
void LibroCalificaciones::establecerNombreCurso(string nombre)
{
	if (nombre.size() <= 25)
	{
		nombreCurso = nombre;
	}

	if (nombre.size() > 25)
	{
		//solo hasta los primeros 25 caracteres
		nombreCurso = nombre.substr(0, 25);

		cerr << "El nombre \"" << nombre << "\" excede la longitud maxima(25) \n" "Se limito nombreCurso a los primeros 25 caracteres\n" << endl;
	}
}

string LibroCalificaciones::obtenerNombreCurso() const
{
	return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const
{
	cout << "Bienvenido al curso de \n" << obtenerNombreCurso() << endl;
}
