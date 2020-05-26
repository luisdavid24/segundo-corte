#include <iostream>
int numeroDepartamento,i,j;
using namespace std;	
int main(int argc, char** argv) {
	cout<<"Escribe el numero de departamentos: ";
	cin>>numeroDepartamento;
	numeroDepartamento=numeroDepartamento-1;
	int matriz[numeroDepartamento][7];
	for(i=0;i<=numeroDepartamento;i++)
	{	cout<<"Por favor poner el nombre del departamento: ";
		cin>>matriz[i][0];
		cout<<"Por favor poner los votos del P0: ";
		cin>>matriz[i][1];
		cout<<"Por favor poner los votos en blanco: ";
		cin>>matriz[i][2];
		cout<<"Por favor poner los votos del P1: ";
		cin>>matriz[i][3];
		cout<<"Por favor poner los votos del P2: ";
		cin>>matriz[i][4];
		cout<<"Por favor poner los votos del P3: ";
		cin>>matriz[i][5];
		cout<<"Por favor poner todos los inscritos: ";
		cin>>matriz[i][6];
		matriz[i][7]=matriz[i][1]+matriz[i][2]+matriz[i][3]+matriz[i][4]+matriz[i][5]+matriz[i][6];
		cout<<"Este es el valor de i: "<<i<<endl;
		cout<<"Este el valor de la llave: "<<numeroDepartamento<<endl;
		
		
	}

//	for(i=0;i<numeroDepartamento;i++)
//	{
//		for(j=0;j<7;j++)
//		{
//			cout<<matriz[i][j]<<endl;
//			cout<<"Entro";
//		}
//	}
	
	return 0;
}
