#pragma once
#include "Ingrediente.h"

class Torta :public Ingrediente {
private:
	string nombre;  //Donde pongo el nombre? Tarea Moral
public:

	Torta(Combo* combo_);
	double costo();
	string toString();


};