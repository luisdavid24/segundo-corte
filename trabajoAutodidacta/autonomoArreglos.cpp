#include <iostream>
//Este algoritmos se podran tus notas y segun algunas preguntar hara algunas modificaciones al vector
int *vector; 
int n,busqueda,trampa,condicion;
using namespace std;
void llenar(int *vector,int n)
{	for(int i=0;i<n;i++)
	{	cout<<"Valor posicion "<<i<<":";
		cin>>vector[i];
	}
}
void cambiar(int *vector,int n,int busqueda)
{	for(int i=0;i<n;i++)
	{	if(i==busqueda)
		{	cout<<"Escribe el nuevo valor por el cambiaron la nota: ";
			cin>>vector[i];
			
		}
	}
}
void mostrar(int *vector,int n)
{	for(int i=0; i<n; i++)
	{	cout<<vector[i]<<" ";
	}
	
}
void perderSemestre(int *vector,int n)
{	for(int i=0; i<n; i++)
	{	vector[i]=0;
	}

}
int main(int argc, char** argv) {
	cout<<"Cantidad de elementos: ";
	cin>>n;
	vector=new int(n);
	llenar(vector,n);
	cout<<"Si te cambiaron una nota escribe (1) sino (4): ";
	cin>>condicion;
	while(condicion!=4){
		cout<<"Escribe el indice de la nota que quiere cambiar: ";
		cin>>busqueda;
		cambiar(vector,n,busqueda);
		cout<<"Si te falta cambiar una o varias nota escribe (1) sino (4): ";
		cin>>condicion;
	}
	cout<<"Escribe (2) si te descubrierion haciendo trampa sino escribe (3): ";
	cin>>trampa;
	if(trampa==2){
		perderSemestre(vector,n);
	}
	cout<<"Esta son tus notas finales: ";
	mostrar(vector,n);
	return 0;
}
