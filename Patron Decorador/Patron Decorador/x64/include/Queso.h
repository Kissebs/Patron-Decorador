#pragma once
#include "Ingrediente.h"

class Queso :public Ingrediente {
private:
	string nombre;  //Donde pongo el nombre? Tarea Moral
public:

	Queso(Combo* combo_);
	double costo();
	string toString();


};