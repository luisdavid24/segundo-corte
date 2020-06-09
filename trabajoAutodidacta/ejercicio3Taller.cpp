#include <iostream>
#include <stdlib.h>
int n1,m1,n2,m2;
int **matriz1,**matriz2,**matriz3;
using namespace std;
void multiplicacion()
{	for(int i=0;i<n1;i++)
	{	for(int j=0;j<m2;j++)
		{	for(int z=0;z<n2;z++)
			{ 	matriz3[i][j]+=matriz1[i][z]*matriz2[z][j];
					
			}	
		}
		
	}
	cout<<"ENTREOOOO SIII";
}
int main(int argc, char** argv) {
	//Esta es la primera matriz
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
//	otra matriz
	cout<<"Escribir el numero de filas de la primera matriz: ";
	cin>>n2;
	cout<<"Escribir el numero de columnas de la primera matriz: ";
	cin>>m2;
	matriz2=new int*[n2];
	for(int i=0;i<n2;i++)
	{	matriz2[i]=new int[m2];
		
	}

	for(int i=0;i<n2;i++)
	{	for(int j=0;j<m2;j++)
		{
			cout<<"Escriba el valor en la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(matriz2+i)+j);
		}
	}
//	aqui va la tercera matriz
	matriz3=new int*[n1];
	for(int i=0;i<n1;i++)
	{	matriz1[i]=new int[m2];
		
	}
	for(int i=0;i<n1;i++)
	{	for(int j=0;j<m2;j++)
		{	*(*(matriz3+i)+j)=0;
		}
	}

	
	multiplicacion();
	//	mostrar el resultado
	for(int i=0;i<n2;i++)
	{	for(int j=0;j<m2;j++)
		{	cout<<*(*(matriz3+i)+j);
		}
	}
	return 0;
}
