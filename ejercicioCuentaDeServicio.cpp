#include <iostream>
//en este ejercicio se dara el valor por separado del agua , energia y elefonia aplicando ciertos descuentos
float total,agua,energia,telefono,consumo1,consumo2,consumo3;
int estrato;
using namespace std;
void valorAgua(float consumo1)
{	if(consumo1<=2000){
		agua=3500;
	}else{
		agua=35000+((consumo1-2000)*400);
	}

}
void valorEnergia(float consumo2)
{	if(consumo2<=3000){
		energia=40000;
	}else{
		energia=40000+((consumo2-3000)*350);
	}
}
void valorTelefonia(float consumo3)
{	if(consumo3<=2000){
		telefono=30000*0.7;
	}else{
		telefono=30000+((consumo3-1000)*100);
	}

}
void descuento(int estrato){
	if(estrato==1 or estrato==2){
		agua=agua*0.8;
		energia=energia*0.85;
		telefono=telefono*0.7;
	}else if(estrato==3 or estrato==4)
		{	agua=agua*0.9;
			energia=energia*0.9;
			telefono=telefono*0.88;
		}else
			{	energia=energia*0.95;
				agua=agua;
				telefono=telefono*0.92;
			}
}
int main(int argc, char** argv){
	cout<<"Escribe tu estrato por favor: ";
	cin>>estrato;
	cout<<"Escribe la cantidad de metros cubicos consumidos: ";
	cin>>consumo1;
	cout<<"Escribe el monto correspodiente a la energia: ";
	cin>>consumo2;
	cout<<"Escribe el monto correspodiente a telefonia: ";
	cin>>consumo3;
	
	valorAgua(consumo1);
	valorEnergia(consumo2);
	valorTelefonia(consumo3);
	descuento(estrato);
	total=agua+energia+telefono;
	cout<<"El valor del agua es: "<<agua<<endl;
	cout<<"El valor de la energia es: "<<energia<<endl;
	cout<<"El valor del telefono es: "<<telefono;
	return 0;
}
