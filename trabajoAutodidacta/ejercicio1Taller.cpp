#include <iostream>
int n,indice,j;
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
	j=0;
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
void ordenamiento(int *vectorFinal,int n)
{	int k,i,aux;
	cout<<"Este es el valor de j "<<j;
	for(i=0;i<j-1;i++)
	{	
		for(k=1;j;k++)
		{	if(vectorFinal[k]>vectorFinal[k+1])
			{	aux=vectorFinal[k];
				vectorFinal[k]=vectorFinal[k+1];
				vectorFinal[k+1]=aux;
				
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
	ordenar(vector,vectorFinal,n);
//	mostrar(vectorFinal,n);
	cout<<"Este el valor de j :"<<j;
	
	ordenamiento(vectorFinal,n);
	cout<<endl;
	mostrar(vectorFinal,n);
	return 0;
	
}
