#include <iostream>
int vectorValle[6], vectorCauca[6],vectorCaldas[6];
int i,votantesValle,votantesCauca,votantesCaldas;
int votoValle,votoCauca,votoCaldas,abstenciaValle,abstenciaCauca,abstenciaCaldas;
using namespace std;

void tomarDatos(int vector[6])
{	int partido1,partido2,partido3,partido4,blanco,inscrito;
	i=0;
	cout<<"Escriba la cantidad de votantes del partido po:";
	cin>>partido1;
	cout<<"Escriba la cantidad de votantes del partido p1:";
	cin>>partido2;
	cout<<"Escriba la cantidad de votantes del partido p2:";
	cin>>partido3;
	cout<<"Escriba la cantidad de votantes del partido p3:";
	cin>>partido4;
	cout<<"Escriba la cantidad de votas en blanco:";
	cin>>blanco;
	cout<<"Escribe la cantidad de inscritos:";
	cin>>inscrito;
	vector[0]=partido1;
	vector[1]=partido2;
	vector[2]=partido3;
	vector[3]=partido4;
	vector[4]=blanco;
	vector[5]=inscrito;
	
	
}

int contadorDatos(int vector[6])
{	int suma;
	suma=0;
	suma+=vector[0];
	suma+=vector[1];
	suma+=vector[2];
	suma+=vector[3];
	
	return suma;
}

int democracia(int votantes,int vector[6])
{	int total=vector[5];
	int resultado=(100*votantes)/total;
	return resultado;
	
}
void mostrar(int vector[6],int votantes,int porcentajeVoto,int abstencion)
{	
	cout<<"Esto son los datos optenidos: "<<endl;
	cout<<"Resultado del po :"<<vector[0]<<endl;
	cout<<"Resultado del p1 :"<<vector[1]<<endl;
	cout<<"Resultado del p2 :"<<vector[2]<<endl;
	cout<<"Resultado del p3 :"<<vector[3]<<endl;
	cout<<"Resultado del p4 :"<<vector[4]<<endl;
	cout<<"Total de votos en blanco :"<<vector[5]<<endl;
	cout<<"Este el total de votos del departamento: "<<votantes<<endl;
	cout<<"Es el numero de abstencion es de: "<<abstencion<<endl;
}

int main(int argc, char** argv) {
	cout<<"Vamos a tomar los datos del Valle"<<endl;
	tomarDatos(vectorValle);
//	cout<<"Vamos a tomar los datos del Cauca"<<endl;
//	tomarDatos(vectorCauca);
//	cout<<"Vamos a tomar los datos de Caldas"<<endl;
//	tomarDatos(vectorCaldas);
//	
	votantesValle=contadorDatos(vectorValle);
//	votantesCauca=contadorDatos(vectorCauca);
//	votantesCaldas=contadorDatos(vectorCaldas);
//	
	votoValle=democracia(votantesValle,vectorValle);
//	votoCauca=democracia(votantesCauca,vectorCauca);
//	votantesCaldas=democracia(votantesCaldas,vectorCaldas);
//	
	abstenciaValle=vectorValle[5]-(votantesValle+vectorValle[4]);
//	abstenciaCauca=vectorCauca[5]-(votantesCauca+vectorCauca[4]);
//	abstenciaCaldas=vectorCaldas[5]-(votantesValle+vectorCaldas[4]);
	
	cout<<"Datos por el valle";
	mostrar(vectorValle)
//	,votoValle,abstenciaValle);
	return 0;
}
