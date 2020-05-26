#include <iostream>
using namespace std;
//Este es el ejercicio de la serie fibonacci
int numero1,numero2,vecez,contador,suma;
int main(int argc, char** argv) {
	cout<<"Por favor escriba el numero de termino que desea ver de la seria:";
	cin>>vecez;
	numero1=0;
	numero2=1;
	contador=1;
	while (contador<=vecez){
		suma=numero1+numero2;
		if(contador==1)
		{ 	cout<<numero1<<endl;
		}else{
			cout<<suma<<endl;
			numero1=numero2;
			numero2=suma;
		}
		contador++;
	}
	return 0;
}
