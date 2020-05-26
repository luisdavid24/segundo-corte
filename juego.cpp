#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
//generar numeros aleatorios.
//1. librerias (time.h)
//2. crear la semilla
//3. rango de numeros
//variable= rand()% (limitesuperior+1);
int numero,ingresado,oportunidades=0;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL)); //semilla valor inicial
	numero= rand()%51;//numeros entre 0 y 50
	//numero entre 20 y 70
	//numero= 20 + rand()%51;
	//notas con un decimal  0...0,5  ..3,5 ..4,8 ..5,0
	//nota= (rand()%51)/10;
	while (ingresado != numero)
	{ cout<<"Numero a adivinar:";
	  cin>>ingresado;
	  oportunidades++;
	   if (ingresado>numero)
	   { cout<<"El numero ingresado es mayor";
		   } else if (ingresado<numero)	
		   			{ cout<<"El numero ingresado es menor";
		  			 }
		  		  else { cout<<"YOU WIN, OPORTUNIDADES"<<oportunidades;
					}
		   
	}
	return 0;
}
