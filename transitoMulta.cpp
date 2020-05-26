#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
//Este es ejercicio de transito y transporte
int infractores, grua, vecez, contador,mujeres,condicion,edad1,edad2,llaveMujeres;
char nombre[30];
void viejito(int edad2)
{	if(edad1<edad2)
	{	int grua;
		cout<<"Si uso la grua escribe el numero 1 sino 2: ";
		cin>>grua;
		if(grua==1)
		{	getchar();
			cout<<"Poner el nombre del infractor: ";
			gets(nombre);
			edad1=edad2;
		}
	}
}
void mujeresProc(int llaveMujeres)
{ 	if(llaveMujeres==2)
	{	int velocidad;
		cout<<"Si al infraccion es por velocidad escribe el numero 1 sino 2: ";
		cin>>velocidad;
		if(velocidad==1)
		{	mujeres++;
		}
	}
	
}
int main(int argc, char** argv) {
	contador=0;
	edad1=0;
	infractores=0;
	mujeres=0;
	while(condicion!=5){
		llaveMujeres=0;
		cout<<"Por favor, escribe la edad del infractor: "<<endl;
		cin>>edad2;
		infractores++;
		viejito(edad2);
		cout<<"Si la infractora es mujer por favor escribe el numero 2: "<<endl;
		cin>>llaveMujeres;
		mujeresProc(llaveMujeres);
		cout<<"Si va a seguir poniendo pon el numero 1 sino escribe el numero 5: "<<endl;
		cin>>condicion;
	}
	cout<<"El total de infractores es de: "<<infractores<<endl;
	cout<<"El el porcentaje de mujeres multadas es:  "<<(100*mujeres)/infractores<<endl;
	cout<<"El nombre del infractor de mayor edad es: "<<nombre;
	return 0;
}
