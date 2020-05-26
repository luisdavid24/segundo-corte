#include <iostream>
int *vec; //este es un puntero 
int i,n;
using namespace std;

int main(int argc, char** argv) {
	cout<<"Cantidad de elementos: ";
	cin>>n;
	vec=new int(n);//dimensiona el vector al tamaño de n
	for(i=0;i<n;i++)
	{	cout<<"Valor posicion "<<i<<":";
		cin>>vec[i];
	}
	for(i=0;i<n;i++)
	{cout<<vec[i]<<"\t";
	}
	
	return 0;
}
