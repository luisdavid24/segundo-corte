#include <iostream>
//En este ejercicio se toma la lista de estudiantes que perdieron c++ y java y los separa
int *vector,*vectorC,*vectorJ; 
int n,llave1,llave2,llave3;
using namespace std;
void llenar(int *vector)
{	int i;
	i=0;
	while(i<n)
	{	cout<<"Escribe el codigo del estudiantes: ";
		cin>>vector[i];
		cout<<"Escribe (1) si perdio c++ o (2) si perdio java o  (3) si no perdio :";
		int k=i+1;
		cin>>vector[k];
		i=i+2;
	}

}
void mostrar(int *vector,int n)
{	int j;
	for(j=0;j<n;j++)
	{cout<<vector[j]<<"\t";
	}
	cout<<endl;
}
void dimensiones(int *vector)
{	int i;
	llave1=0,llave2=0,llave3;
	for(i=1;i<n;i+=2)
	{
		if (vector[i]== 1)
		{
			llave1++;
		}else if (vector[i]== 2)
			{
				llave2++;
			}else if(vector[i]== 3)
				{
					llave3++;
				}
	}
	vectorC=new int(llave1);
	vectorJ=new int(llave2);
	
}
void separarEstudiantes(int *vector)
{	int i;
	for(i=1;i<n;i+=2)
	{	if (vector[i]== 1)
		{
			vectorC[i-1]=vector[i-1];
		}else if (vector[i]== 2)
			{
				vectorJ[i-1]=vector[i-1];
			}
	}
	
}
int main(int argc, char** argv) {
	cout<<"Escriba la cantidad estudiante: ";
	cin>>n; 
	n=n*2;
	vector= new int(n);
	llenar(vector);
	dimensiones(vector);
	separarEstudiantes(vector);
	cout<<"Estos son los estudiantes que perdieron c++: "<<endl;
	mostrar(vectorC,llave1);
	cout<<"Estos son los estudiantes que perdieron Java: "<<endl;
	mostrar(vectorJ,llave2);
	
	return 0;
}
