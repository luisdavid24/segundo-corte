#include <iostream>
int n,dias,i;
float km,precio,precioTodos;
using namespace std;
int main(int argc, char** argv) {
	cout<<"Pon la cantidad de tiquetes: ";
	cin>>n;
	precioTodos=0;
	for(i=1;i<=n;i++)
	{	cout<<"Escribe la cantidad de dias:"<<endl;
		cin>>dias;
		cout<<"Escribe la cantidad de kilometros: "<<endl;
		cin>>km;
		precio=km*5000;
		if(km>1000 and dias<5)
		{	precio=precio*0.8;
		}
		cout<<"Precio del tiquete es:/n "<<precio;
		precioTodos=precioTodos+precio;
	}
	cout<<"El promedio de los tiquetes: "<<precioTodos/n;
	
	return 0;
}
