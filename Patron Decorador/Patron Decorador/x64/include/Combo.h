#pragma once


#include <iostream>
#include <sstream>
using namespace std;

class Combo {  //clase intefaz de la herencia --->> es un abstract
public:
	double precio; //Puede colocarse en otro lado
	virtual ~Combo() {}
	virtual double costo()=0;
	virtual string toString() =0;


};

//Seria bueno colocar el constructor de Combo