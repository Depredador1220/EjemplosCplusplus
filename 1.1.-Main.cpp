
#include "pch.h"
#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main()
{	
	LibroCalificaciones curso1("Curso de Realidad Aumentada");
	LibroCalificaciones curso2("Curso API Blender con Python");

	cout << "Curso1: " << curso1.obtenerNombreCurso() << endl;
	cout << "Curso2: " << curso2.obtenerNombreCurso() << endl;
}
