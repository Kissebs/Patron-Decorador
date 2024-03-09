#include "../include/Torta.h"

Torta::Torta(Combo* combo_) : Ingrediente(combo_) //Combo es un puntero que esta viendo al paquete de decoradores
//o ve la lista enlazada (Para entender)
{
	 //Aqui enlazo el ultio ingrediente que ingresa con el paquete
	nombre = "Torta";
	this->precio = 100;

}

double Torta::costo()
{
	return  this->precio+combo->costo();  //Aqui tambien es recursivo, porque trae los precios de todos los ingredientes

}

string Torta::toString()
{
	stringstream s;

	s << nombre
    << precio<<endl
    << combo->toString() << endl;// Es aqui donde se da la accion recursiva

	return s.str();
}