#include <iostream>
#include <stdlib.h>
int n1,m1,n2,m2;
int **matriz1,**matriz2;
using namespace std;

int main(int argc, char** argv) {
	cout<<"Escribir el numero de filas de la primera matriz: ";
	cin>>n1;
	cout<<"Escribir el numero de columnas de la primera matriz: ";
	cin>>m1;
	matriz1=new int*[n1];
	for(int i=0;i<n1;i++)
	{	matriz1[i]=new int[m1];
		
	}
	cout<<"Poner los datos";
	for(int i=0;i<n1;i++)
	{	for(int j=0;j<m1;j++)
		{
			cout<<"Escriba el valor en la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(matriz1+i)+j);
		}
	}
	cout<<"Escribir el numero de filas de la primera matriz: ";
	cin>>n2;
	cout<<"Escribir el numero de columnas de la primera matriz: ";
	cin>>m2;
	matriz2=new int*[n2];
	for(int i=0;i<n2;i++)
	{	matriz2[i]=new int[m2];
		
	}
	cout<<"Poner los datos";
	for(int i=0;i<n2;i++)
	{	for(int j=0;j<m2;j++)
		{
			cout<<"Escriba el valor en la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(matriz2+i)+j);
		}
	}
	return 0;
}
