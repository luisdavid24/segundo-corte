#include <iostream>
int vec[20];
int i,n;
using namespace std;

int main(int argc, char** argv) {
	cout<<"Cantidad de elementos: ";
	cin>>n;
	for(i=0;i<n;i++)
	{	cout<<"Valor posicion "<<i<<":";
		cin>>vec[i];
	}
	for(i=0;i<n;i++)
	{cout<<vec[i]<<"\t";
	}
	
	return 0;
}
