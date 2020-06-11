#include <iostream>
int n,indice;
int *vector,*vectorFinal;
using namespace std;
void llenar(int *vector,int n)
{	for(int i=0;i<n;i++)
	{	cout<<"Valor posicion "<<i<<":";
		cin>>vector[i];
	}
}
void mostrar(int *vector,int n)
{	for(int i=0; i<n;i++)
	{	cout<<vector[i]<<" ";
		
	}
}

void ordenar(int *vector,int *vectorFinal,int n)
{	int i,k,aux;
	int j=0;
	for(i=0;i<n;i++)
	{	if(vector[i]%2==0)	
		{	vectorFinal[j]=vector[i];
			j++;
		}
		
	}
	
	
	k=j;
	for(i=0;i<n;i++)
	{	if(vector[i]%2!=0)	
		{	vectorFinal[k]=vector[i];
			k++;
		}
		
	}
}
void ordenamiento(int *vector,int n)
{	int aux;
	for(int i=0;i<n;i++)
	{	for(int j=0;j<n-1;j++)
		{	if(vector[j]>vector[j+1])
			{	aux=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=aux;
			}
		}
	}
	for(int i=0;i<n;i++)
	{	for(int j=0;j<n-1;j++)
		{	if(vector[j]<vector[j+1] and vector[j]%2!=0)
			{	aux=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=aux;
			}
		}
	}
}
int main(int argc, char** argv) {
	cout<<"Por favor poner la cantidad de elementos del vector: ";
	cin>>n;
	vector=new int(n);
	vectorFinal=new int(n);
	
	llenar(vector,n);
	ordenamiento(vector,n);
	ordenar(vector,vectorFinal,n);
	
	mostrar(vectorFinal,n);
	return 0;
	
}
