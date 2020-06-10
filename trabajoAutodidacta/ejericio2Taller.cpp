#include <iostream>
int n,ganar,perder;
int *vector1,*vector2,*vector3,*vector4,*vector5;
using namespace std;
void evaluar(int *vector,int n)
{	int i=0;
	for(i=0;i<=n;i++)
	{
		if(vector[i]>=3)
		{
			ganar++;
		}else{
			perder++;
		}
	}
	ganar=ganar-1;
	
	
	
}
void llenar(int *vector,int n)
{
	for(int i=0;i<n;i++)
	{	cout<<"Valor posicion "<<i<<":";
		cin>>vector1[i];
	}
}
int main(int argc, char** argv) {
	n=6,ganar=0,perder=0;
	vector1=new int(n);
	vector2=new int(n);
	vector3=new int(n);
	vector4=new int(n);
	vector5=new int(n);
	llenar(vector1,n);
	llenar(vector2,n);
	llenar(vector3,n);
	llenar(vector4,n);
	llenar(vector5,n);
	
	evaluar(vector1,n);
	evaluar(vector2,n);
	evaluar(vector3,n);
	evaluar(vector4,n);
	evaluar(vector5,n);
	
	cout<<"Estos son los que ganaron : "<<ganar;
	cout<<"Estos son los que perdieron: "<<perder;
	return 0;
}
