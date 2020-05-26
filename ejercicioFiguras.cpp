#include <iostream>
int numero;
float resultado;
using namespace std;
float Triangulo(float numero)
{	float base,altura;
	cout<<"Escribe la altura del triangulo: ";
	cin>>altura;
	cout<<"Escribe la base del triangulo: ";
	cin>>base;
	return (base*altura/2);
	
}
float Cuadrado(float numero)
{	float lado;
	cout<<"Escribe el lado del cuadrado: ";
	cin>>lado;
	
	return (lado*lado);
	
}
float Trapecio(float numero)
{	float baseMayor,baseMenor,altura;
	cout<<"Escribe la altura del trapecio:: ";
	cin>>altura;
	cout<<"Escribe la base mayor del trapecio: ";
	cin>>baseMayor;
	cout<<"Escribe la base menor del trapecio: ";
	cin>>baseMenor;
	return ((baseMayor+baseMenor)*altura/2);
	
}
int main(int argc, char** argv){
	cout<<"Por favor, seleccione una de las siguiente opcion 1.Triangulo 2.Cuadrado 3.Trapecio 4.Salir: ";
	cin>>numero;
	if(numero==1){
		resultado=Triangulo(numero);
	}else if(numero==2)
		{resultado=Cuadrado(numero);
		}else if(numero==3)
			{resultado=Trapecio(numero);
			}else
				{	cout<<"Te saliste o comestite un error";
					resultado=0;	
				}
	cout<<"El area de la figura seleccionada es de: "<<resultado;			
	return 0;
}
