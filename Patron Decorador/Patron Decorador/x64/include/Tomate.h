#pragma once
#include "Ingrediente.h"

class Tomate :public Ingrediente {
private:
	string nombre;  //Donde pongo el nombre? Tarea Moral
public:

	Tomate(Combo* combo_);
	double costo();
	string toString();


};