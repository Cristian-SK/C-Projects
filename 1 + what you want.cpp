#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
	int total, till, count;
	string res;
	
	cout<<"Este programa suma los numeros del 1 hasta un numero deceado."<<endl;
	
do
{
	cout<<"\n\n"<<endl;
	cout<<"Hasta que numero deceas sumar : ";
		cin>>till;
	for(count=1; count <= till; count++)
	{
		total = total + count ;
	}
	
	cout<<"La suma de 1 hasta "<<till<<" es : "<<total<<endl;
	
	cout<<"\n\n"<<endl;
	cout<<"Deseas salir del programa? (S/N) ";
		cin>>res;
}while (res !="s" && res !="S");

	getch();
	
	return 0;
}
