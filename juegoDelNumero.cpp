#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int numero,ingresado, oportunidades,nivel,vidas;
int main(int argc, char** argv) {
	cout<<"Por favor secciona un nivel de dificultad muy facil(1),facil(2),normal(3),dificil(4),dificil(5) y dios(6): ";
	cin>>nivel;
	srand(time(NULL));
	if(nivel==1){
		numero= rand()%21;
	}else if(nivel==2)
		{	numero= rand()%41;
		}else if(nivel==3)
			{	numero= rand()%61;
			}else if(nivel==4)
				{	numero= rand()%74;
				}else if(nivel==5)
					{	numero= rand()%86;
					}else if(nivel==6)
						{	numero= rand()%111;
						}	
	
	oportunidades=0;
	cout<<"Escribe el numero de vidas con las que deseas jugar";
	cin>>vidas;
	vidas++;
	
	while (ingresado!=numero and oportunidades!=5000)
	{	oportunidades++;	
		cout<<"Numero a adivinar: ";
		cin >>ingresado;
		if(vidas==oportunidades){
			oportunidades=5000;
			cout<<"Te quedas sin vidas por favor mejora";
		}else if(ingresado>numero)
			{	cout<<"El numero ingresado es mayor";
			}else if(ingresado<numero)
					{ cout<<"El numero ingresado es menor";
					}else
						{ cout<<"You win";
						}
		
	}
	return 0;
}
