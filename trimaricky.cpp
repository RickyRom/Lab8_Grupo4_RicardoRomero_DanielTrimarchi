#include <iostream>
#include <string>
#include <vector>
#include "Real.h"
#include "Racional.h"
#include "Radical.h"
using namespace std;
vector<Real> agregar(vector<Real>);
void pedirnumero(vector<Real>&,int);

int main() {
	vector<Real> banco;
	int opcion,nbancos,num1,num2;

	do{
		cout<<"Bienvenil Menu de Opciones"<<endl;
		cout<<"1.- AgregarReal"<<endl;
		cout<<"2.- Sumar"<<endl;
		cout<<"3.- Restar"<<endl;
		cout<<"4.- Multiplicar"<<endl;
		cout<<"5.- Dividir"<<endl;
		cout<<"6.- Salir"<<endl;
		cin>> opcion;
		cout<< "Desea usar solo numeros del banco?[1:si /2:no ]: ";
		cin >>nbancos;

		switch (opcion) {

			case 1:

				banco=agregar(banco);

				banco = agregar(banco);

				break;
			case 2:
				pedirnumero(banco,1);
				break;
			case 3:
				
					pedirnumero(banco,2);
				break;
			case 4:

					pedirnumero(banco,3);
	
				break;
			case 5:

					pedirnumero(banco,4);
				
				break;
			case 6:
				cout<<"¡TENGA UN BUEN DIA!"<<endl;
				break;	
		}
	}while(opcion != 6);

}



void pedirnumero(vector<Real>& banco,int signo){
	double num1,num2;
	int opcion;
	bool n1=false,n2=false;
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
						cout<<i<<") "<<banco[i].getNumero()<<endl;
					}
					do{
					cout<<"Que Numero quiere?: ";
					cin>>num1;
				}while(num1<0||num1>=banco.size());

				}
				n1=true;
				break;
			
			case 2:
			cout<<"Ingrese el Numero: ";
			cin >>num1;
				break;

		}

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
						cout<<i<<") "<<banco[i].getNumero()<<endl;
					}
					do{
					cout<<"Que Numero quiere?: ";
					cin>>num2;
				}while(num2<0||num2>=banco.size());

				}
				n2=true;
				break;
			
			case 2:
			cout<<"Ingrese el Numero: ";
			cin >>num2;
				break;

		}
	if(signo==1){
		if((n1&&n2)==true){
			cout<<banco[num1].getNumero()<<" + "<<banco[num2].getNumero()<<" = "<<banco[num1]+banco[num2];
		}else if(n1==true && n2==false){
			cout<<banco[num1].getNumero()<<" + "<<num2<<" = "<<banco[num1]+num2;
		}else if(n2==true && n1==false){
			cout<<banco[num2].getNumero()<<" + "<<num1<<" = "<<num1+banco[num2].getNumero();
		}else if((n1&&n2)==false){
			cout<<num1<<" + "<<num2<<" = "<<num1+num2;
		}
	}else if(signo==2){
				if((n1&&n2)==true){
			cout<<banco[num1].getNumero()<<" - "<<banco[num2].getNumero()<<" = "<<banco[n1]-banco[num2];
		}else if(n1==true && n2==false){
			cout<<banco[num1].getNumero()<<" - "<<num2<<" = "<<banco[num1]-num2;
		}else if(n2==true && n1==false){
			cout<<num1<<" - "<<banco[num2].getNumero()<<" = "<<num1-banco[num2].getNumero();
		}else if((n1&&n2)==false){
			cout<<num1<<" - "<<num2<<" = "<<num1-num2;
		}
	}else if(signo==3){
				if((n1&&n2)==true){
			cout<<banco[num1].getNumero()<<" * "<<banco[num2].getNumero()<<" = "<<banco[num1]*banco[num2];
		}else if(n1==true && n2==false){
			cout<<banco[num1].getNumero()<<" * "<<num2<<" = "<<banco[num1]*num2;
		}else if(n2==true && n1==false){
			cout<<banco[num2].getNumero()<<" * "<<num1<<" = "<<num1*banco[num2].getNumero();
		}else if((n1&&n2)==false){
			cout<<num1<<" * "<<num2<<" = "<<num1*num2;
		}
	}else if(signo==4){
				if((n1&&n2)==true){
			cout<<banco[num1].getNumero()<<" / "<<banco[num2].getNumero()<<" = "<<banco[num1]/banco[num2];
		}else if(n1==true && n2==false){
			cout<<banco[num1].getNumero()<<" / "<<num2<<" = "<<banco[num1]/num2;
		}else if(n2==true && n1==false){
				cout<<num1<<" / "<<banco[num2].getNumero()<<" = "<<num1-banco[num2].getNumero();
		}else if((n1&&n2)==false){
			cout<<num1<<" / "<<num2<<" = "<<num1/num2;
		}
	}

}

vector<Real> agregar(vector<Real> banco) {
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
	return banco;

}
