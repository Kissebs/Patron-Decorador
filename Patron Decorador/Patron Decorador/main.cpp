
#include "Tomate.h"
#include "Torta.h"
#include "Queso.h"
#include "Lechuga.h"
#include "Hamburguesa.h"
#include "Combo.h"

int main() {

	//Interfaz de usuario  //Tarea moral

	//Creando Hamburguesas

	int op=4;
	cout << "Creando hamburguesas" << endl;

	//Tarea moral ----> CREAR UN MENU

	do {
	
		cout << "Menu" << endl;
		//switch (case)
		//El usuario pida lo que quiera

	} while (op != 4);
		//Tambien poder quitar algun ingrediente que el usuariio no le guste

		//combo basico

	Combo* hamburguesa = new Hamburguesa();

	Combo* queso = new Queso(hamburguesa);

	Combo* torta = new Torta(queso);

	Combo* lechuga = new Lechuga(torta);  //Este es el decorador

	Combo* ppio = lechuga;

	cout << ppio->costo() << " Colones";

	system("pause");
	return 0;
}
