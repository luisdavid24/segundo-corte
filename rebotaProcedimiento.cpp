#include <iostream>
//Este es el ejercicio de la pelota que rebota, pero con procedimiento
float altura,quintaParte;
int vecez;
using namespace std;
void rebotesPelota(float altura,float quintaParte)
{	do
	{	altura=altura*0.9;
			cout<<"\nAltura cambiando mientras cambia"<<altura<<endl;
			vecez++;
		
	}while (altura>quintaParte);
	
}
int main(int argc, char** argv) {
	cout<<"Altura Inicial: ";
	cin>>altura;
	quintaParte=altura/5;
	vecez=0;
	rebotesPelota(altura,quintaParte);
	cout<<"EL numero de rebotes que se tardo: "<<vecez;
	return 0;
}
