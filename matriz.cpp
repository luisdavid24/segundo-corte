#include <iostream>
//Aqui se ve como se hace una matriz para crearla y llenarla
int i,n,f,c,j;
int mat[10][10];
using namespace std;

int main(int argc, char** argv) {
	cout<<"Filas:";
	cin>>f;
	cout<<"\nColumnas:";
	cin>>c;
	//pongamos valores a la matriz
	for(i=0;i<f;i++)
	{	for (j=0;j<c;j++)
			{cout<<"Valor posicion "<<i<<","<<j<<":";
			 cin>>mat[i][j];
			}
	}
	//veamos el resultado
	for(i=0;i<f;i++)
	{	for (j=0;j<c;j++)
			{cout<<mat[i][j]<<"\t";
			}
		cout<<"\n";	
	}
	return 0;
}
