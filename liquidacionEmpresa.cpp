#include <iostream>
int AnosT;
float ultimoSueldo,facLiquidacion,LiquiBase,boni,deduc,impuesto,Vliquidacion;
using namespace std;
float Factorliquidacion(int AnosT)
{	if(AnosT<5)
	{	return (0.8);
	}else if(AnosT>=5 and AnosT<=10)
		{	return (0.85);
		}else if(AnosT>10 and AnosT<=20)
			{ return (0.9);
			}else 
				{ return (0.95);
				}
}
void  Bonificacion(float LiquiBase,float boni)
{	int Edad, hijos;
	cout<<"Ingresa tu edad: ";cin>>Edad;
	cout<<"Sino tiene hijos escribe 1 de lo contrario 2: ";cin>>hijos;
	switch(hijos)
	{ 	case 1:
			if(Edad<60)
			{	boni=LiquiBase*0.05;
			}else if(Edad>=60 and Edad<=70)
				{	boni=LiquiBase*0.07;
				}else
					{ boni=LiquiBase*0.1;
					}
				break;
		case 2:
			if(Edad<60)
			{	boni=LiquiBase*0.07;
			}else if(Edad>=60 and Edad<=70)
				{	boni=LiquiBase*0.09;
				}else 
					{	boni=LiquiBase*0.12;
					}
			break;
	}
}
void Deducciones(float LiquiBase, float boni, float impuesto,float deduc)
{	float suma;
	suma=LiquiBase+boni;
	if(suma<100000000 )
	{	impuesto=suma*0.06;
		deduc=suma*0.11;
	}else if(suma>=100000000 and suma<=150000000)
		{ 	impuesto=suma*0.09;
			deduc=suma*0.17;
		}else
			{ 	impuesto=suma*0.14;
				deduc=suma*0.27;
			}
}
int main(int argc, char** argv){
	cout<<"Ingrese el valor de su ultimo sueldo: ";cin>>ultimoSueldo;
	cout<<"Ingrese el numero de años trabajados: ";cin>>AnosT;
	facLiquidacion=Factorliquidacion(AnosT);
	LiquiBase=ultimoSueldo*AnosT*facLiquidacion;
	Bonificacion(LiquiBase,boni);
	Deducciones(LiquiBase,boni,impuesto,deduc);
	Vliquidacion=ultimoSueldo*AnosT*facLiquidacion+boni-deduc;
	cout<<"Factor liquidacion: "<<facLiquidacion;
	cout<<"Liquidacion base: "<<LiquiBase;
	cout<<"Bonificacion: "<<boni;
	return 0;
}
