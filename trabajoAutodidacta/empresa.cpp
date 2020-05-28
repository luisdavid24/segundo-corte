#include <iostream>
//Este codigo debe mostrar la probabilidad de que tu negocio sobreviva al Covid-19
using namespace std;
int probabilidad;
void alcohol()
{	int respuesta;
	cout<<"Escribe (1) si NO vendes alcohol, (2) si vendes poco alcohol o (3) si vendes mucho alcohol :"<<endl;
	cin>>respuesta;
	if(respuesta==1){
		probabilidad+=10;
	}else if(respuesta==2)
		{	probabilidad+=20;
			
		}else if(respuesta==3)
			{
				probabilidad+=30;
			}
	
}
void trasnporte()
{	int respuesta;
	cout<<"Escribe (1) para moverte caminas, (2) si tienes que tomar bus para moverte o (3) si usas tu auto o moto :"<<endl;
	cin>>respuesta;
	if(respuesta==1)
	{	int peligro;
		cout<<"Donde caminas es facil que te roben escribe (1) de lo contrario (2): "<<endl;
		cin>>peligro;
		if(peligro==1)
		{
			probabilidad-=10;	
		}else{
			probabilidad+=8;
		}
	}else if(respuesta==2)
		{	int peligro;
			cout<<"Si usas el bus en hora pico escribe (1) sino (2) : "<<endl;
			cin>>peligro;
			if(peligro==1)
			{
				probabilidad-=29;	
			}else{
				probabilidad+=5;
			}
			
		}else{
			probabilidad+=15;	
		}
}
void tapabocas()
{	int respuesta;
	cout<<"Escribe (1) si NO vendes tapabocas, (2) si vendes pocos tapabocas o (3) si vendes muchos tapabocas :"<<endl;
	cin>>respuesta;
	if(respuesta==1){
		probabilidad+=10;
	}else if(respuesta==2)
		{	probabilidad+=20;
			
		}else if(respuesta==3)
			{
				probabilidad+=25;
			}
}
int edad(int probabilidad)
{	int respuesta;
	cout<<"Escribe tu edad actual"<<endl;
	cin>>respuesta;
	if(respuesta<18){
		probabilidad+=5;
	}else if(respuesta>18 and respuesta<50)
		{	probabilidad+=10;
			
		}else 
			{
				probabilidad-=10;
			}
	return probabilidad;
}

int main(int argc, char** argv) {
	cout<<"Hola, bienvenido conoceremos si tu negocio sobrevivira al Covid-19"<<endl;
	probabilidad=0;
	alcohol();
	tapabocas();
	trasnporte();
	probabilidad=edad(probabilidad);
	cout<<"Esta es la probabilidad de que tu negocio y tu persona sobrevivan: "<<probabilidad<<"%"<<endl;
	cout<<"Es imposible obtener un 100% de resultado porque es imposible estar protegidos al maximo";
	system("color 0B");
	
	return 0;
}
