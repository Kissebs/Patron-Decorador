#pragma once
#include "Combo.h"

class Ingrediente :public Combo{   //Esta es la clase mas importante
								//Es el decorador (Grande)
protected:
	string nombre;
	Combo* combo;  //Puntero que enlaza las capas

public:
    Ingrediente(Combo* combo_) : combo(combo_){}
    virtual ~Ingrediente() = default;
	virtual double costo()=0;
	virtual string toString() = 0;

};