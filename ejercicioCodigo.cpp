#include <iostream>
#include <math.h>
float seno, term,x;
int n,fact,cterm,i,pot;
using namespace std;

int main(int argc, char** argv) {
	x=2;
	seno=0;
	cterm=0;
	pot=1;
	while(pot<=5)
	{
		fact=1,i=2;
		while(i<=pot)
		{
			fact*=i;
			i++;
			cout<<"Esto es como cambia la i "<<i<<endl;
			cout<<"Esto es como cambia fact "<<fact<<endl;
		}
		
		term=pow(x,pot)/fact;
		cout<<"Esto es term "<<term<<endl;
		cterm+=1;
		cout<<"Esto es lo vale cterm "<<cterm<<endl;
		if(cterm%2==0)
		{
			term*=(-1);
//			cout<<"Esto es lo cambia term dentro del bucle: "<<term<<endl;
		}
		seno+=term;
		pot+=2;
		cout<<"Esto es como cambia term "<<term<<endl;
		cout<<"Esto es como va cambiando seno "<<seno<<endl;
		cout<<"esta es la manera en cambia el cterm "<<cterm <<endl;
		cout<<"."<<endl;
	}
	cout<<"El resultado de seno es de "<<seno;
	return 0;
}
