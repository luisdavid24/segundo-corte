#include <iostream>
//Este es el ejercicio de la pelota que rebota
float altura,quintaParte;
int vecez;
using namespace std;
int main(int argc, char** argv) {
	cout<<"Altura Inicial: ";
	cin>>altura;
	quintaParte=altura/5;
	vecez=0;
	do
	{	altura=altura*0.9;
			cout<<"\nAltura cambiando mientras cambia"<<altura<<endl;
			vecez++;
		
	}while (altura>quintaParte);
	cout<<"EL numero de rebotes que se tardo: "<<vecez;
	return 0;
}
