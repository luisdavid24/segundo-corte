#include <iostream>
int i, golLocal,golVisitante,golesLocalesTotales,golesLocalesVisitante,puntosLocoales,puntosVisitantes;
using namespace std;
//En este ejercicio se debe decir la cantidad de puntos obtenidos por un equipo de futbol en una fecha :)
int main(int argc, char** argv) {
	golVisitante=0;
	golesLocalesTotales=0;
	puntosLocoales=0;
	golesLocalesVisitante=0;
	puntosVisitantes=0;
	for(i=1;i<=10;i++)
	{	cout<<"Escribe los goles de los locales: ";
		cin>>golLocal;
		cout<<"Escribe los goles de los visitantes: ";
		cin>>golVisitante;
		if(golVisitante==golLocal)
		{	golesLocalesTotales+=golLocal;
			golesLocalesVisitante+=golVisitante;
			puntosLocoales++;
			puntosVisitantes++;
		}else if(golVisitante>=golLocal)
			{	golesLocalesTotales+=golLocal;
				golesLocalesVisitante+=golVisitante;
				cout<<"El ganador es el equipo visitante";
				puntosVisitantes=puntosVisitantes+3;
			}else
				{	golesLocalesTotales+=golLocal;
					golesLocalesVisitante+=golVisitante;
					cout<<"El ganador es el equipo local";
					puntosLocoales=puntosLocoales+3;
					
				}
	}
	cout<<"El total de goles por parte de los visitantes es de: "<<golesLocalesVisitante<<endl;
	cout<<"El total de goles por parte de los locales es de: "<<golesLocalesTotales<<endl;
	cout<<"El total de los puntos del local es de: "<<puntosLocoales<<endl;
	cout<<"El total de los puntos de visitante es de: "<<puntosVisitantes;
	return 0;
}
