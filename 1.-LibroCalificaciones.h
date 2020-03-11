#pragma once

#include <iostream>
#include <string>

class LibroCalificaciones
{
public:

	//Constructor
	explicit LibroCalificaciones(std::string nombre) : nombreCurso(nombre)
	{
	}

	void establecerNombreCurso(std::string nombre)
	{
		nombreCurso = nombre;
	}

	std::string obtenerNombreCurso() const
	{
		return nombreCurso;
	}

	void mostrarMensaje() const
	{
		std::cout << "Bienvenido al curso:\n" << obtenerNombreCurso() << std::endl;
	}

private:
	std::string nombreCurso;
};
