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
	for(i=1;i<j-1;i++)
	{	for(k=i+1;j;k++)
		{	if(vectorFinal[i]>vectorFinal[k])
			{	aux=vectorFinal[k];
				vectorFinal[i]=vectorFinal[k];
				vectorFinal[k]=aux;
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
	mostrar(vectorFinal,n);
	cout<<"Este el valor de j :"<<j;
	
	ordenamiento(vectorFinal,n);
	cout<<endl;
	mostrar(vectorFinal,n);
	return 0;
	
}
