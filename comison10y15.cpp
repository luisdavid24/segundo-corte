#include <iostream>
using namespace std;
//Este ejercicio es de las comisiones que pueden ser del 10% y del 15%
int llave,comisionTotal;
float producto;
void comisionPequena(float producto)
{	comisionTotal+=(0.1*producto);
}
void comisionGrande(float producto)
{	comisionTotal+=(0.1*producto);
}
int main(int argc, char** argv) {
	llave=0;
	comisionTotal=0;
	while(llave!=2){
		cout<<"Por favor poner el valor del producto: ";
		cin>>producto;
		if(producto<=1000){
			comisionPequena(producto);
		}else{
			comisionGrande(producto);	
		}
		cout<<"Si termino de ingresar los articulos escriba el numero 2 de lo contrario 1: ";
		cin>>llave;
	}
	cout<<"El total de comisiones es: "<<comisionTotal;
	return 0;
}
