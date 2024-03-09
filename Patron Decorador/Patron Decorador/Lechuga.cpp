#include "Lechuga.h"

Lechuga::Lechuga(Combo* combo_)  //Combo es un puntero que esta viendo al paquete de decoradores
								//o ve la lista enlazada (Para entender)
{
	combo = combo_; //Aqui enlazo el ultio ingrediente que ingresa con el paquete
	nombre = "Lechuga";
	precio = 100;

}

double Lechuga::costo()
{
	return combo->precio+precio;  //Aqui tambien es recursivo, porque trae los precios de todos los ingredientes

}

string Lechuga::toString()
{
	stringstream s;

	s << nombre << endl
		<< precio<<endl;
	s << combo->toString() << endl;// Es aqui donde se da la accion recursiva

	return s.str();
}
