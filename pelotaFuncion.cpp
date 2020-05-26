#include <iostream>
//Este es el ejercicio de la pelota que rebota, pero con funcion
float altura,quintaParte;
int vecez,resultadoVecez;
using namespace std;
int rebotesPelota(float altura,float quintaParte, int vecez)
{	do
	{	altura=altura*0.9;
			cout<<"\nAltura cambiando mientras cambia"<<altura<<endl;
			vecez++;
		
	}while (altura>quintaParte);
	return vecez;
}
int main(int argc, char** argv) {
	cout<<"Altura Inicial: ";
	cin>>altura;
	quintaParte=altura/5;
	vecez=0;
	resultadoVecez=rebotesPelota(altura,quintaParte, vecez);
	cout<<"EL numero de rebotes que se tardo: "<<resultadoVecez;
	return 0;
}
