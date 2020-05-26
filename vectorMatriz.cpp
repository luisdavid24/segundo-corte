#include <iostream>
//int vec[20];
int *vec;//puntero &vec->direccion de memoria
int i,n,f,c,j,val,pos;
int mat[10][10];
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int busq_secuencial(int *vec,int n,int val)
{int i=0;
 while (i<n && val != vec[i])
 {i++;//i=i+1; 	
 }
 if (i<n)
  {return i;
  }
 else
  {return -1;	
  }
}//fin funcion
int main(int argc, char** argv) {
	cout<<"Cantidad de elementos vector:";
	cin>>n;
	//tamanno vector
	vec= new int(n);//dimensiona el vector al tamaño n, vec[n]
	//indices en arreglos inician en cero
	//llenar vector
//	for (i=0;i<n;i++)
    i=0;
    while (i<n)
	{cout<<"Valor posicion "<<i <<":";
	 cin>>vec[i];
	 i++;
	}
	//ELIMINAR
	//mostrar vector
	for (i=0;i<n;i++)
	{cout<<vec[i]<<"\t";
	}
	//cout<<vec[5]<<"\t";
	//buscar//
	cout<<"\nValor a buscar:";
	cin>>val;
	pos=busq_secuencial(vec,n,val);//solo el nombre del vector
	if (pos==-1)
	{cout<<"\nvalor no encontrado";
	} else { cout<<"\nEncontrado en posicion"<<pos;
			}
			
	cout<<"\nFilas:";
	cin>>f;
	cout<<"\nColumnas:";
	cin>>c;
	//llenado matriz
	for(i=0;i<f;i++)
	{	for (j=0;j<c;j++)
			{cout<<"Valor posicion "<<i<<","<<j<<":";
			 cin>>mat[i][j];
			}
	}
	//mostrar matriz
	for(i=0;i<f;i++)
	{	for (j=0;j<c;j++)
			{cout<<mat[i][j]<<"\t";//tab printf("%d\t",mat[i][j]);
			}
		cout<<"\n";	//salto de linea printf("\n");
	}
	return 0;
}
