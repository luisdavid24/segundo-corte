#include <iostream>
int i,res, n;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout<<"Terminos: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{	res=i*5;
		cout<<i<<"*5="<<res<<endl; 
	
	}
	return 0;
}
