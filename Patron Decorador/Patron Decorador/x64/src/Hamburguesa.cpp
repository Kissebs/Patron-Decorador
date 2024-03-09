#include "../include/Hamburguesa.h"

Hamburguesa::Hamburguesa()
{
	precio = 600;
}

Hamburguesa::~Hamburguesa()
{
}

double Hamburguesa::costo()
{
	return precio;
}

string Hamburguesa::toString()
{
	stringstream s;

	s << "Hamburguesa"
		<< costo() << endl;

	return s.str();
}
