#include <iostream>
using namespace std;
int *vector1,*vector2,*resultado;
int n,j;
//En este ejercicio se esta llenando dos lista las cuales se van a multiplicar para llenar el resultado en otra lista
void llenar(int *vector)
{	int i;
	for(i=0;i<n;i++)
	{	cout<<"Escribe el valor que vamos a poner en la posicion"<<i<<": ";
		cin>>vector[i];
	}

}
void multiplicarVetores(int *vector1,int *vector2,int *vector3)
{	j=0;
	int resultado;
	
	while(j!=n)
	{	resultado=(vector1[j])*(vector2[j]);
		vector3[j]=resultado;
		j++;
	}
}
int main(int argc, char** argv) {
	cout<<"Por favor poner la cantidad de elemento de los arreglos: ";
	cin>>n;	
	vector1=new int(n);
	vector2=new int(n);	
	resultado=new int(n);
	llenar(vector1);
	llenar(vector2);
	multiplicarVetores(vector1,vector2,resultado);	
	
	return 0;
}
