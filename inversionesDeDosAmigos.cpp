#include <iostream>
float c1,c2,c3,valor;
int meses;
using namespace std;
void GanaOPierde(float c1,float c2,float c3,int meses,float valor)
{	while (valor=<c3)
	{	c1=c1*1.03;
		c2=c2*1.04;
		meses++;
		valor=c1+c2;
	}		
}

int main(int argc, char** argv) {
	cout<<"Escribe la cantidad c1: ";
	cin>>c1;
	cout<<"Escribe la cantidad c2: ";
	cin>>c2;
	cout<<"Escribe la cantidad c3: ";
	cin>>c3;
	valor=c1+c2;
	inversion(c1,c2,c3,meses)
	meses=0;
	cout<<"La cantidad de meses que se demoran para conseguir el capital"<<meses;
	
	return 0;
}
