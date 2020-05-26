#include <iostream>
using namespace std;
//Este es el ejercicio del reloj pero con un solo ciclo
int dia, hora,minutos,segundo;
int main(int argc, char** argv) {
	dia=23,hora=0,minutos=0,segundo=0;
	while(hora<dia){
		cout<<hora<<":"<<minutos<<":"<<segundo<<endl;
		segundo++;
		if(segundo>59){
			segundo=0;
			minutos=minutos+1;
		}
		if (minutos>59)
		{
			minutos=0;
			hora++;
		}
	}		
	return 0;
}
