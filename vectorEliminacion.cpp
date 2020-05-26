#include <iostream>
//En este ejericio se va crear un vector y luego se buscar si posee o no un determinado elemento.
int *vector;
int i,n,f,c,j,val,pos;

using namespace std;

int busquedaElemento(int *vector,int n,int val)
{int i=0;
 while (i<n && val != vector[i])
 {i++;//i=i+1; 	
 }
 if (i<n)
  {return i;
  }
 else
  {return -1;	
  }
}

int main(int argc, char** argv) {
	cout<<"Cantidad de elementos vector:";
	cin>>n;
	vector= new int(n);
	i=0;
    //En esta seccion el codigo estamos llenando el vector por medio de este ciclo
	while (i<n)
	{cout<<"Valor posicion "<<i <<":";
	 cin>>vector[i];
	 i++;
	}
	//En esta otra seccion estamos poniendo en pantalla los elementos del vector
	for (i=0;i<n;i++)
	{cout<<vector[i]<<"\t";
	}
	
	cout<<"\nValor a buscar:";
	cin>>val;
	pos=busquedaElemento(vector,n,val);//solo el nombre del vector
	if (pos==-1)
	{cout<<"\nvalor no encontrado";
	} else { cout<<"\nEncontrado en posicion"<<pos;
			}	
			
//	funcionEliminiar
	return 0;
}
