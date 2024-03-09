
#include "../include/Tomate.h"
#include "../include/Torta.h"
#include "../include/Queso.h"
#include "../include/Lechuga.h"
#include "../include/Hamburguesa.h"
#include "../include/Combo.h"

int main() {

	//Interfaz de usuario  //Tarea moral

	//Creando Hamburguesas

	int op=4;
    Combo* combo = new Hamburguesa();
    Combo* aux = nullptr;
    cout << "Bienvenido a la hamburgueseria" << endl;

	cout << "Creando hamburguesas" << endl;

	//Tarea moral ----> CREAR UN MENU

	do {

		cout << "Menu" << endl;
		//switch (case)
		//El usuario pida lo que quiera
        cout << "Seleccione un ingrediente" << endl;
        cout << "1. Tomate" << endl;
        cout << "2. Torta" << endl;
        cout << "3. Queso" << endl;
        cout << "4. Lechuga" << endl;
        cout << "5. Salir" << endl;
        cin >> op;
        switch (op) {
        case 1:
            if(aux != nullptr){
                Combo* tomate = new Tomate(aux);
                aux = tomate;

            }else {
                Combo* tomate = new Tomate(combo);
                aux = tomate;
            }
            break;
        case 2:
            if (aux != nullptr) {
                Combo* torta = new Torta(aux);
                aux = torta;
            }else {
                Combo* torta = new Torta(combo);
                aux = torta;
            }
            break;
        case 3:
            if (aux != nullptr) {
                Combo* queso = new Queso(aux);
                aux = queso;
            }else {
                Combo* queso = new Queso(combo);
                aux = queso;
            }
            break;
        case 4:
            if (aux != nullptr) {
                Combo* lechuga = new Lechuga(aux);
                aux = lechuga;
            }else {
                Combo* lechuga = new Lechuga(combo);
                aux = lechuga;
            }
            break;
        case 5:
            cout << "Saliendo" << endl;
            cout << "Hamburguesa: " << aux->costo() << " Colones" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }

	} while (op != 5);
		//Tambien poder quitar algun ingrediente que el usuario no le guste
        // combo basico

	/*Combo* hamburguesa = new Hamburguesa();

	Combo* queso = new Queso(hamburguesa);

	Combo* torta = new Torta(queso);

	Combo* lechuga = new Lechuga( torta);  //Este es el decorador

	Combo* ppio = lechuga;

	cout << "Hamburguesa: "<<ppio->costo() << " Colones";

    //Tambien eliminar un ingrediente que no le guste al usuario (Tarea moral)

*/

	system("pause");
	return 0;
}
