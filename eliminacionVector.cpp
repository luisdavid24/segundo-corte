#include <iostream>
//Este codigo busca eliminar un elemento de una vector. 
int *vector; 
int i,n,j,busqueda;
using namespace std;
void eliminarElemento(int *vector,int busqueda)
{ 	i=0;
	while(i<=n and busqueda!=vector[i])
	{	i++;
		
	}
	if(i<=n)
	{	
		for(j=i;j<=n;j++)
		{	vector[j]=vector[j+1];
		}
		n--;
	}else{
		cout<<"El valor"<<busqueda<<"No esta en el vector";
	}
}
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
	cout<<"Escribe el numero que quieres eliminar: ";
	cin>>busqueda;
	eliminarElemento(vector,busqueda);
	for(i=0;i<n;i++)
	{cout<<vector[i]<<"\t";
	}
	
	cout<<"Fin del programa";
	
	return 0;
}
