#include <iostream>
#include <string>
#include <vector>
#include "Real.h"
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
		cout<<"Bienvenido al Menu de Opciones"<<endl;
		cout<<"1.- Agregar Real"<<endl;
		cout<<"2.- Sumar"<<endl;
		cout<<"3.- Restar"<<endl;
		cout<<"4.- Multiplicar"<<endl;
		cout<<"5.- Dividir"<<endl;
		cout<<"6.- Salir"<<endl;
		cin>> opcion;
		switch (opcion) {

			case 1:
				agregar(banco);
				break;
			case 2:
				sumar(banco);
				break;
			case 3:
				restar(banco);
				break;
			case 4:
				multiplicar(banco);
				break;
			case 5:
				dividir(banco);
				break;
			case 6:
				cout<<"Tenga Buen Dia"<<endl;
				break;	
		}
	}while(opcion != 6);

}



void sumar(vector<Real>& banco){
	int opcion;
	do{
	cout<<"Desea usar un numero del banco?:"<<endl;
	cout<<"1) Si o 2) No"<<endl;
	cin>>opcion;
		}while(opcion<1||opcion>2);
		switch(opcion){
			case 1:
				if(banco.size()!=0){
					for (int i = 0; i < banco.size(); ++i)
					{
						cout<<i<<") "<<banco.getNumero()<<endl;
					}
				}
				break;
			
			case 2:
				break;

		}


}