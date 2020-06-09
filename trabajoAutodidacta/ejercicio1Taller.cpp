#include <iostream>
int n,indice;
int *vector;
using namespace std;
//void llenar(int n,int vector)
//{	for(i=0;i<=n;i++)
//	{	cout<<"Por favor poner el valor de la posicion "<<i<<": ";
//		cin>>vector[i];
//	}	
//}

void ordenar(int n,int indice)
{	int i=0,j=0,aux=0;
	for(i=0;n-1;i++)
	{
		for(j=i+1;n;i++)
		{
			if(vector[i]>vector[j] and vector[j]%2==0)
			{
				aux=vector[i];
				vector[i]=vector[j];
				vector[j]=aux;
				indice++;
			}
		}
	}
}
int main(int argc, char** argv) {
	cout<<"Por favor poner la cantidad de elementos del vector: ";
	cin>>n;
	n-=1;
	vector=new int(n);
	//	llenar(n,vector[n]);
	for(int i=0; i<=n;i++)
	{	cout<<"Escribir el numero del elemento: ";
		cin>>vector[i];
			
	}
	ordenar(n,indice);
	for(int i=0;i<=n;i++)
	{
		cout<<vector[i]<<" ";
	}
	return 0;
	
}
