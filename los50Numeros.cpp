#include <iostream>
//En este ejericio de 50 numero se debe decir cuantos son par,impar,positivo y negativos
float numero,par, impar, positivo, negativo,contador;
using namespace std;

int main(int argc, char** argv) {
	contador=0;
	par=0;
	while (contador<=50)
	{	cout<<"Escribe el numero: ";
		cin>>numero;
		if(numero%2==0)
		{ par++;
		}
		if(numero>0)
		{ positivo++;
		}
		contador++;
		
	}
	impar=50-par;
	negativo=50-positivo;
	cout<<"De los 50 numeros son pares un total de: "<<pares<<endl;
	cout<<"De los 50 numeros son impares del total son: "<<impar<<endl;
	cout<<"De los 50 numeros son positivos son: "<<positivo<<endl;
	cout<<"De los 50 numeros son negativos son:"<<negativo<<endl;
	return 0;
}
