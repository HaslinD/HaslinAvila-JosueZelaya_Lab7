#include "Real.h"
#include "Radical.h"
#include "Racional.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <typeinfo>

using namespace std;

int menu();

int main(){
	vector <Real> banco;
	bool salir = false;
	double numerador,denominador,coeficiente,indice, radicando, num;
	int pos1,pos2;
	string total;
	while (!salir){
        switch(menu()){
           	case 1:{
							cout<<"Que desea agregar?: " <<endl
							<<"[1]. Racionales"<<endl
							<<"[2]. Radicales"<<endl;
							int opcion;
							cin>>opcion;
							switch (opcion) {
								case 1:{
									cout<<"Ingrese el numerador: "<<endl;
									cin>>numerador;
									cout<<"Ingrese el denominador: "<<endl;
									cin>>denominador;
									Racional ra(denominador,numerador);
									banco.push_back(ra);
									break;
								}
								case 2:{
									cout<<"Ingrese el coeficiente: "<<endl;
									cin>>coeficiente;
									cout<<"Ingrese el indice: "<<endl;
									cin>>indice;
									cout<<"Ingrese el radicando: "<<endl;
									cin>>radicando;
									Radical radical(coeficiente, indice,radicando);
									banco.push_back(radical);
								}
							}
						}
	       		case 2:{
							int op;
							int opcion;
							for (int i = 0; i < banco.size; i++) {
								cout<<i <<". "<<banco[i];
							}
							cout<<"Ingrese la posicion de la primera clase que desea usar: "<<endl;
							cin>>pos1;
							cout<<"[1]. Escoger otra clase: "<<endl
							cout<<"[2]. Ingresar un numero: "<<endl;
							cout<<"Ingrese opcion: "<<endl;
							cin>>op;
							switch (op){
								case 1:{
									for (int i = 0; i < banco.size; i++) {
										cout<<i <<". "<<banco[i];
									}
									cout<<"Ingrese la posicion de la segunda clase que desea usar: "<<endl;
									cin>>pos2;
									cout<<"Que desea realizar?: "<<endl
									<<"[1]. Sumar"<<endl
									<<"[2]. Restar"<<endl
									<<"[3]. Multiplicacion"<<endl
									<<"[4]. Division"<<endl;
									cin>>opcion;
									switch(opcion){
										case 1:{
											if (banco[pos2].getTipo()=="Radical"){
												total=(*banco[pos1]+banco[pos2]);
											}else if (banco[pos2].getTipo()=="Racional"){
												total=(*banco[pos2]+banco[pos1]);
											}
											break;
										}
										case 2:{
											break;
										}
										case 3:{
											break;
										}
										case 4:{
											break;
										}
									}
									break;
								}
								case 2:{
									cout<<"Ingrese un numero: "<<endl;
									cin>>num;
									total=*banco[pos1]+num;
									break;
								}
							}

	           	break;
						}

	       		case 3:{
	          	salir = true;
	           	break;
						}
	    	}
	}
	return 0;
}

int menu(){
    int opcion;
    bool valido = true;
    do{
        cout << "-----MENU------" << endl
			<< "1.- Agregar Numeros al Banco" << endl
			<< "2.- Eligir" << endl
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

/*string Binario::tostring(){
  stringstream uno;
	for (int i = 0; i < banco.size(); i++) {
		uno<<"[" << banco[i]<<"]";
	}

  return uno.str();
}*/
