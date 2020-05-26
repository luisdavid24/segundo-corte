#include <iostream>
int clase1,clase2,clase3,clase4,claseUsuario,jornadaUsuario,manana,tarde,mayor;
float valor1,valor2,valor3,valor4,valorUsuario,mayorValor;
using namespace std;
void claseUsuarioMetodo(int claseUsuario,int valorUsuario)
{	if(claseUsuario==1)
	{	clase1++;
		valor1+=valorUsuario;
	}else if (claseUsuario==2)
		{	clase2++;
			valor2+=valorUsuario;
		}else if(claseUsuario==3)
			{	clase3++;
				valor3+=valorUsuario;
			}else if(claseUsuario==4)
				{	clase4++;
					valor4+=valorUsuario;
				}
}
void jornada(int jornadaUsuario)
{	if(jornadaUsuario==1)
	{	manana++;
	}else 
		{	tarde++;
		}
}
void mayorJornada(int manana,int tarde)
{	if(manana>tarde)
	{ cout<<"El servicio mas usado es de manana";
	}else if(manana<tarde)
		{	cout<<"El servicio mas usado es de tarde";
		}else	
			{ cout<<"Se uso el mismo numero de vecez el servicio de la manana que el de la tarder";
			}
	
}
int main(int argc, char** argv) {
	cout<<"Por favor poner la clase 1 , 2, 3 o 4:";
	cin>>claseUsuario;
	cout<<"Poner la jornada seleccionada mañana(1) o tarde(2) escriba solamente 1 o 2: ";
	cin>>jornadaUsuario;
	cout<<"Escribe el valor del servicio: ";
	cin>>valorUsuario;
	valor1=0,valor2=0,valor3=0,valor4=0;
	clase1=0,clase2=0,clase3=0,clase4=0;
	claseUsuarioMetodo(claseUsuario,valorUsuario);
	jornada(jornadaUsuario);
	cout<<"Este es el numero de vecez que se uso el servicio numero uno: "<<clase1<<endl;
	cout<<"El valor producido por el servicio numero uno: "<<valor1<<endl;
	cout<<"Este es el numero de vecez que se uso el servicio numero dos: "<<clase2<<endl;
	cout<<"El valor producido por el servicio numero dos: "<<valor2<<endl;
	cout<<"Este es el numero de vecez que se uso el servicio numero tres: "<<clase3<<endl;
	cout<<"El valor producido por el servicio numero tres: "<<valor3<<endl;
	cout<<"Este es el numero de vecez que se uso el servicio numero cuatro: "<<clase4<<endl;
	cout<<"El valor producido por el servicio numero cuatro: "<<valor4<<endl;
	mayorJornada(manana,tarde);
	return 0;
}
