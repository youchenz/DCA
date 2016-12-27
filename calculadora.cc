#include <iostream>

using namespace std;

float Suma(float a, float b) {
	return a + b;
}

float Resta(float a, float b) {
	return a - b;
}

float Multiplicacion(float a, float b) {
	return a * b;
}

float Division(float a, float b) {
	return a / b;
}

int main() {
	
	int n;
	float op1;
	float op2;
	float resultado = 0;
	do{
		cout << "Calculadora:" << endl;
		cout << "1- Sumar." << endl;
		cout << "2- Restar." << endl;
		cout << "3- Multiplicar." << endl;
		cout << "4- Dividir." << endl;
		cout << "0- Salir." << endl;
		cin >> n;
		if(n>0 && n<5) {
			cout << "  Introduce el primer operando: " ;
			cin >> op1;
			cout << "  Introduce el segundo operando: " ;
			cin >> op2;
			if(n==1)
				cout << Suma(op1,op2) << endl;
			else if(n==2)
				cout << Resta(op1,op2) << endl;
			else if(n==3)
				cout << Resta(op1,op2) << endl;
			else if(n==4)
				cout << Resta(op1,op2) << endl;
		}
	}while(n>0 && n<5);
	
	return 0;
	
}
