#pragma once
#include "Ingrediente.h"

class Lechuga :public Ingrediente{
private:
	string nombre;  //Donde pongo el nombre? Tarea Moral
public:

	Lechuga(Combo *combo_);
	double costo();
	string toString();


};