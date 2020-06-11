#include <iostream>
#include <stdlib.h>
#include <vector>
int n1,m1,n2,m2;
using namespace std;


int main(int argc, char** argv) {
	cout<<"Vamos a llenar la primera matriz"<<endl;
	int matriz1[3][3];
	for(int i=0;i<3;i++)
	{	for(int j=0;j<3;j++)
		{
			cout<<"Poner el valor en la posicion ["<<i<<"]["<<j<<"] : ";
			cin>>matriz1[i][j];
		}
		
	}
	cout<<"Vamos a llenar la segunda  matriz"<<endl;
	int matriz2[3][3];
	for(int i=0;i<3;i++)
	{	for(int j=0;j<3;j++)
		{	cout<<"Poner el valor en la posicion ["<<i<<"]["<<j<<"] : ";
			cin>>matriz2[i][j];
		}
	}
	int matriz3[3][3];
	for(int i=0;i<3;i++)
	{	for(int j=0;j<3;j++)
		{	matriz3[i][j]=0;
		}
	}
	//Aqui va la multiplicacion
	for(int i=0;i<3;i++)
	{	for(int j=0;j<3;j++)
		{	for(int z=0;z<3;z++)
			{	matriz3[i][j]+=matriz1[i][z]*matriz2[z][j];
			}
		}
	}
	//mostrar 
	for(int i=0;i<3;i++)
	{	for(int j=0;j<3;j++)
		{	cout<<matriz3[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
