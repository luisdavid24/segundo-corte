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
		{	cout<<*(*(matriz+i)+j)<<",";
		
		}
		cout<<endl;
	}
}
int main(int argc, char** argv) {
	//Esta es la primera matriz
	cout<<"Escribir el numero de filas de la matriz: ";
	cin>>n1;
	cout<<"Escribir el numero de columnas de la  matriz: ";
	cin>>m1;
	llenar(matriz1,n1,m1);
	cout<<"Escribir el numero de filas de la matriz: ";
	cin>>n2;
	cout<<"Escribir el numero de columnas de la  matriz: ";
	cin>>m2;
	llenar(matriz2,n2,m2);
	mostrar(matriz1,n1,m2);
	

	return 0;
}
