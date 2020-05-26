#include <iostream>
using namespace std;
int n,cod,i,cp;
float n1,n2,n3,nf,snf;
void GanaOPierde(int n,int i)
{	while (i<=n)
	{	cout<<"Codigo: ";
		cin>>cod;
		cout<<"Nota uno: ";
		cin>>n1;
		cout<<"Nota dos: ";
		cin>>n2;
		cout<<"Nota tres: ";
		cin>>n3;
		nf=(n1+n2+n3)/3;
		cout<<"Nota final"<<nf<<"\n";
		snf+=nf;
		if(nf<3){
			cp++;
		}
		i++;
		
	}	
}

int main(int argc, char** argv) {
	cout<<"Cantidad de estudiantes: ";
	cin>>n;
	i=1,cp=0,snf=0;
	GanaOPierde(n,i);
	
	cout<<"Perdieron un total de: "<<cp<<"\n";
	cout<<"Ganaron un total de: "<<n-cp<<"\n";
	cout<<"Promedio grupo es de: "<<snf/n;
	
	
	return 0;
}
