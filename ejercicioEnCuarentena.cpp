#include <iostream>

using namespace std;
int dia,semanas,flexiones,sentadillas,barras,fisico;
void pectoral(int dia,int semanas)
{	int i;
	i=0;
	while(i<=semanas)
	{	flexiones+=10;
		i++;
	}
}
void piernas(int dia,int semanas)
{	int i;
	i=0;
	while(i<=semanas)
	{	sentadillas+=20;
		i++;
	}
}
void espalda(int dia,int semanas)
{	int i;
	i=0;
	while(i<=semanas)
	{	barras+=15;
		i++;
	}
}

int main(int argc, char** argv) {
	cout<<"Escribe el numero dias a la semana que vas hacer ejercicio: ";
	cin>>dia;
	cout<<"Escribe el numero de semanas en las cuales se hara ejercicio:  ";
	cin>>semanas;
	flexiones=0;
	fisico=0;
	pectoral(dia,semanas);
	piernas(dia,semanas);
	espalda(dia,semanas);
	fisico+=flexiones;
	fisico+=sentadillas;
	fisico+=barras;
	if (fisico>500)
	{	cout<<"Te estas ejercitando mucho excelente";
	}else if (fisico<=500 and fisico>380)
			{ cout<<"Estas haciendo una cantidad aceptable de ejercicio, pero puede mejorar";
			}else if(fisico<=380 and fisico>200)
				{	cout<<"Estas haciendo lo minimo,eres un vago";
				}else if(fisico<=200)
					{	cout<<"Que flojo que eres al final de la cuarente pesaras 120kg GORDOO";
					}
	
	return 0;
}
