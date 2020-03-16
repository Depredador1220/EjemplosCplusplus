#include "pch.h"
#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main()
{	
	LibroCalificaciones curso1("Introduccion a la programacion en Unity con Realidad Aumentada");
	LibroCalificaciones curso2("Blender con Python");

	cout << "Curso1: " << curso1.obtenerNombreCurso() << endl;
	cout << "Curso2: " << curso2.obtenerNombreCurso() << endl;

	curso1.establecerNombreCurso("Realidad Aumentada");

	cout << "Curso1 modificado: " << curso1.obtenerNombreCurso() << endl;
}
