#include <iostream>
#include <math.h>
float numero;
int par,impar, positivo,negativos,i;
using namespace std;
void Los50Numeros(int i,int par,int positivo)
{	while (i<=50)
	{	cout<<"Escribe uno de los 50 numeros: ";
		cin>>numero;
		if(fmod(numero, 2) == 0)
		{	par++;
		}
		if(numero>0){
			positivo++;
		}
		i++;
	}
	
}
int main(int argc, char** argv) {
	i=0,par=0,positivo=0;
	Los50Numeros(i,par,positivo);
	negativos=50-positivo;
	impar=50-par;
	cout<<"De los 50 numero son par: "<<par<<"\n";
	cout<<"De los 50 numero son impares: "<<impar<<"\n";
	cout<<"De los 50 numero son negativos: "<<negativos<<"\n";
	cout<<"De los 50 numero son positivo: "<<positivo<<"\n";
		
	
		
		
	
	return 0;
}
