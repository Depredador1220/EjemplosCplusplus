#pragma once
#include <string>

class LibroCalificaciones
{
public:

	//Constructor
	explicit LibroCalificaciones(std::string);

	void establecerNombreCurso(std::string);

	std::string obtenerNombreCurso() const;

	void mostrarMensaje() const;

	void determinarPromedioClase() const;

private:
	std::string nombreCurso;
};
