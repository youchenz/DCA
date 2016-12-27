#include <iostream>

using namespace std;



int main() {
	
	int n;
	float op1;
	float op2;
	float resultado = 0;
	do{
		cout << "Calculadora:" << endl;
		cout << "  1- Sumar." << endl;
		cout << "  2- Restar." << endl;
		cout << "  3- Multiplicar." << endl;
		cout << "  4- Dividir." << endl;
		cout << "  0- Salir." << endl;
		cin >> n;
		if(n>0 && n<5) {
			cout << "  Introduce el primer operando: " ;
			cin >> op1;
			cout << "  Introduce el segundo operando: " ;
			cin >> op2;
		}
	}while(n<0 || n > 4);
	
	return 0;
	
}
