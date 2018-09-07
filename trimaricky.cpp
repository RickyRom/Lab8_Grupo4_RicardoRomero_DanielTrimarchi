#include <iostream>
#include <string>
#include <vector>
#include "Real.h"
#include "Racional.h"
#include "Radical.h"
using namespace std;

void sumar(vector<Real>&);
void restar(vector<Real>&);
void agregar(vector<Real>&);
void dividir(vector<Real>&);
void multiplicar(vector<Real>&);

int main() {
	vector<Real> banco;

	int opcion;
	do{
		cout<<"Bienvenil Menu de Opciones"<<endl;
		cout<<"1.- AgregarReal"<<endl;
		cout<<"2.- Sumar"<<endl;
		cout<<"3.- Restar"<<endl;
		cout<<"4.- Multiplicar"<<endl;
		cout<<"5.- Dividir"<<endl;
		cout<<"6.- Salir"<<endl;
		cin>> opcion;
		switch (opcion) {

			case 1:
				
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				
				break;
			case 5:
				
				break;
			case 6:
				cout<<"¡TENGA UN BUEN DIA!"<<endl;
				break;	
		}
	}while(opcion != 6);
}

void agregar(vector<Real> banco) {
	int opn;
	do{
		cout<<"Que Desea Agregar?"<<endl;
		cout<<"1.- Racional"<<endl;
		cout<<"2.- Radical"<<endl;
		cout<<"3.- Salir"<<endl;
		cin>> opn;

		switch(opn) {

			case 1:
			{
				double num, den;

				cout<<"Ingrese el numerador: "<<endl;
				cin>> num;
				cout<<"Ingrese el denominador: "<<endl;
				cin>> den;

				Real raci = Racional(num,den);
				banco.push_back(raci);

				break;
			}
			case 2:{

			
				double coef, indice, radic;

				cout<<"Ingrese el Coeficiente"<<endl;
				cin>> coef;
				cout<<"Ingrese el indice: "<<endl;
				cin>> indice;
				cout<<"Ingrese el radicando: "<<endl;
				cin>> radic;

				Real radical = Radical(coef,indice,radic);
				banco.push_back(radical);

				break;
			}	
			case 3:
				break;
		}

	}while (opn != 3);



}

