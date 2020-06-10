#include <iostream>
int n,ganar,perder,total;
int *vector1,*vector2,*vector3,*vector4,*vector5;
using namespace std;
void evaluar(int *vector,int n)
{	int i=0;
	for(i=0;i<n;i++)
	{
		if(vector[i]>=3)
		{
			ganar++;
		}else{
			perder++;
		}
		total+=vector[i];
	}
	
	
	
	
}
void llenar(int *vector,int n)
{	cout<<"Valor a llenar las notas de un estudiantes "<<endl;
	for(int i=0;i<n;i++)
	{	cout<<"Valor posicion "<<i<<":";
		cin>>vector[i];
	}
}
int main(int argc, char** argv) {
	n=6,ganar=0,perder=0,total=0;
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
	
	total=total/30;
	
	cout<<"Estos son las materias  ganadas : "<<ganar<<endl;
	cout<<"Estos son las materias que perdieron: "<<perder<<endl;
	cout<<"Este es el promedio del grupo :"<<total;
	return 0;
}
