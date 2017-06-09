
#include "Real.h"
#include "Radical.h"

#include "Racional.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int menu();

int main(){
	int* Banco;
	for (int i = 0; i < 9; ++i)
	{
		Banco = new int[9];
	}
	for (int i = 0; i < 9; ++i)
	{
		Banco[i] = i;
	}
	bool salir = false;
	while (!salir){
        switch(menu()){
           	case 1:{

               	break;}

	       	case 2:{

	           	break;}

	       	case 3:
	           	salir = true;
	           	break;
	    }
	}
	return 0;
}

int menu(){
    int opcion;
    bool valido = true;
    do{
        cout << "-----MENU------" << endl
			<< "1.- Crear Numeros" << endl
			<< "2.- Usar" << endl
			<< "3.- Salir" << endl;

        cout << " Ingrese una opción: ";
        cin >> opcion;
        if (opcion > 0 && opcion < 4)
            valido = true;
        else {
            cout << "La opcion seleccionada es Nula, intente de nuevo ......." << endl;
        }
        cout << "----------------------" << endl;

    }while(!valido);
    return opcion;
}
