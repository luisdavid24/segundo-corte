#include <iostream>
#include <math.h>
float inversion1,inversion2,presupuestoNecesario;
int meses, mesesNecesarios;
using namespace std;
float tiempoEspera(float inversiones1,float inversiones2,int meses,float presupuestoNecesario)
{	while(presupuestoNecesario>=inversiones1+inversiones2)
	{
		inversiones1=inversiones1*1.03;
		inversiones2=inversiones2*1.04;
		meses++;
	}
	return meses;
	
}

int main(int argc, char** argv) {
	cout<<"Escribe por favor el monto de la inversion1: ";
	cin>>inversion1;
	cout<<"Escribe el monto de la otra inversion: ";
	cin>>inversion2;
	cout<<"Escribe el monto al cual deben llegar para llegar el objetivo: ";
	cin>>presupuestoNecesario;
	meses=0;
	mesesNecesarios=tiempoEspera(inversion1, inversion2 ,meses,presupuestoNecesario);
	cout<<"El numero de meses necesario para llegar el objetivo es: "<<mesesNecesarios;
		
	
	return 0;
}
