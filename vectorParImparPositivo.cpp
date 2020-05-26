#include <iostream>
//Este codigo voy a mostrar la cantidad de  elemento que son pares, impares, negativos y positivos;
int *vector;
int n,pares,impares,negativos,positivos;
using namespace std;
void llenar(int *vector)
{	int i;
	for(i=0;i<n;i++)
	{	cout<<"Escribe el valor que vamos a poner en la posicion"<<i<<": ";
		cin>>vector[i];
	}

}
void calcular(int *vector)
{	int j;
	j=0;
	for(j=0;j<n;j++)
	{	if(vector[j]%2==0)
		{
			pares++;
		}else{
			impares;
		}
		if(vector[j]>0)
		{	positivos++;
		}else{
			negativos++;
		}
	}
	
}
int main(int argc, char** argv) {
	cout<<"Por favor poner el numero de elemento del vector: ";
	cin>>n;
	vector=new int(n);
	llenar(vector);
	calcular(vector);
	cout<<"La cantidade elemento que son positivos es de :"<<positivos<<endl;
	cout<<"La cantidade elemento que son negativos es de :"<<negativos<<endl;
	cout<<"La cantidade elemento que son pares es de :"<<pares<<endl;
	cout<<"La cantidade elemento que son impares es de :"<<impares<<endl;
	return 0;
}
