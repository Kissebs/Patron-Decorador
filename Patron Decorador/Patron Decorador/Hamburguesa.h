#pragma once

#include "Combo.h"


using namespace std;

class Hamburguesa:public Combo {
private:

public:
	Hamburguesa();
	virtual ~Hamburguesa();
	virtual double costo();
	virtual string toString();


};