#include "pch.h"
#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main()
{	
	LibroCalificaciones curso1("Blender con Python");

	curso1.mostrarMensaje();

	curso1.determinarPromedioClase();
}
