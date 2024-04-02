#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	string ans;
	int count;
	double loan, inter, month, monthly;
	char menu;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout<<"Este programa es para calcular la mensualidad\nde un prestamo.\n"<<endl;

	
for (count = 1; ; count++)
{
	cout << "--Menu--\n"<<endl;
	cout << "Entre un [0] Salir" << endl;
	cout << "Entre un [1] para calcular la mensualidad de un prestamo." << endl;
	cout << "Entre un [2] para saber en cuanto cualifica para un prestamo." << endl;
	cout << "Opcion : ";
	cin >> menu;
	cout<<endl;
	
	switch (menu)
	{
		case '1':
		cout << "Entre la cantidad: $";
			cin>>loan;	
		cout << "Entre la cantidad del interes: ";
			cin>>inter;
		cout << "Entre el tiempo en meses: ";
			cin>>month;
		inter /= 100 ;
		monthly= (inter/12)*loan/(1-(1/pow((inter/12)+1,month))) ;
		cout << "La mensualidad del prestamo: $" << monthly <<"\n"<< endl;
		break;
		
		case '2':
		cout << "Entre mensualidad del prestamo: $";
			cin>>monthly;
		cout << "Entre la cantidad del interes: ";
			cin>>inter;
		cout << "Entre el tiempo en meses: ";
			cin>>month;
		inter /= 100 ;
		loan = monthly*(1-(1/pow((inter/12)+1,month)))/(inter/12) ;
		cout << "La cantidad del prestamo es: $" << loan <<"\n"<< endl;	
		break;
		
		case '0':
		cout << "Esta seguro que desea salir del programa? (s/n) : ";
			cin>>ans;
		cout<<endl; 
		break;

	default:
		cout << "(Seleccion Invalida. Entre solo 0,1,2)\n\n";
}
 if (ans == "s" || ans == "S")
 {
 break;
 }
}
	return 0;
}
