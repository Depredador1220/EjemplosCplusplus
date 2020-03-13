#include "pch.h"
#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre) : nombreCurso(nombre)
{

}

void LibroCalificaciones::establecerNombreCurso(string nombre)
{
	nombreCurso = nombre;
}

string LibroCalificaciones::obtenerNombreCurso() const
{
	return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const
{
	cout << "Bienvenido al curso de \n" << obtenerNombreCurso() << endl;
}
