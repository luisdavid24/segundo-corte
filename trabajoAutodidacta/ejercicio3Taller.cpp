#include <iostream>
#include <stdlib.h>
#include <vector>
int n1,m1,n2,m2;
int **matriz1,**matriz2,**matriz3;

using namespace std;

void llenar(int **matriz,int n,int m)
{	matriz=new int*[n];
	for(int i=0;i<n;i++)
	{	matriz[i]=new int[m];
		
	}
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<m;j++)
		{	cout<<"Escriba el valor en la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(matriz+i)+j);
		}
	}
}
void mostrar(int **matriz,int n,int m)
{	
	for(int i=0;i<n;i++)
	{	for(int j=0;j<m;j++)
		{	cout<<*(*(matriz+i)+j)<<" ";
			cout<<"Entro en el bucle";
		}
		cout<<endl;
	}
}
void multiplicar()
{	for(int i=0;i<n1;i++)
	{	for(int j=0;j<m2;j++)
		{	for(int z=0;z<n2;++z)
			{	*(*(matriz3+i)+j)+=(*(*(matriz1+i)+j))*(*(*(matriz2+i)+j));
			}
		}
		
	}
	cout<<"Entro";
}
int main(int argc, char** argv) {

	cout<<"Escribir el numero de filas de la matriz: ";
	cin>>n1;
	cout<<"Escribir el numero de columnas de la  matriz: ";
	cin>>m1;
	llenar(matriz1,n1,m1);
	mostrar(matriz1,n1,m1);
	
//	mostrar(matriz1,n1,m1);



	return 0;
}
