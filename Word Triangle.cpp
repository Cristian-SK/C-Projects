#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	
	
	string word;
	int A;
	A=1;
	cout<<"Este programa es para escribir una palabra y luego letra por letra formal una piramide.\n"<<endl;
	cout<<"Escriba su palabra:";
		cin>>word;
	do
	{
		cout<<word.substr(0,A)<<endl;
		 A++;
	}while(A<=word.length());
	
	A=word.length()-1;
	
	do
	{
		cout<<word.substr(0,A)<<endl;
		 A--;
	}while(0<=A);
	
	getch();
	return 0;
}
