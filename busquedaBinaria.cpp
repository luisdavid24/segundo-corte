#include <iostream>
//Este codigo emplea la busqueda binaria. 
int *vector; 
int i,n,busqueda;
using namespace std;

int main(int argc, char** argv) {
	cout<<"Cantidad de elementos: ";
	cin>>n;
	vector=new int(n);
	for(i=0;i<n;i++)
	{	cout<<"Valor posicion "<<i<<":";
		cin>>vector[i];
	}
	for(i=0;i<n;i++)
	{cout<<vector[i]<<"\t";
	}
	cout<<"Escribe el valor que buscas: ";
	cin>>busqueda;
	int inferior=0,superior=n,mitad;
	while(inferior<=superior)
	{	mitad=(inferior+superior)%2;
		if(vector[mitad]==busqueda)
		{ break;
		}
		if(vector[mitad]>busqueda)
		{	 superior=mitad;
			mitad=(inferior+superior)%2;
		}
		if(vector[mitad]<busqueda)
		{	inferior=mitad;
			mitad=(inferior+superior)%2;
		}
	}
	cout<<"La posicion del elemento esta en la posicion: "<<mitad;
	
	return 0;
}
