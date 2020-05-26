#include <iostream>
using namespace std;
int i,tabla,tablaNum;

int main(int argc, char** argv) {
	cout<<"El numero de elementos de la tabla:";
	cin>>tabla;
	cout<<"Tabla e que numero es la tabla:";
	cin>>tablaNum;
	while (i<=tabla)
	{	cout<<i<<"*"<<tablaNum<<"="<<i*tablaNum<<"\n";
		i++;
		
	}
	
	
	
	return 0;
}
