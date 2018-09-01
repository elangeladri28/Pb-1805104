#include<iostream>
#include<time.h>
using namespace std;
int r;
int op;
void juego();
void juego1();
void main() {
	juego();
	
	cout << "Adioooooos :)" << endl;
	system("pause");

}
void juego1() {

	system("cls");
	cout << "Bienvenido, vamos a jugar piedra, papel o tijera." << endl;
	cout << "Introduce" << endl;
		cout << "1.Piedra \n 2.Papel \n 3.Tijera" << endl;
	cin >> op;
	switch (op) {
	case 1:
		cout << "Elegiste Piedra" << endl;
		break;
	case 2:
		cout << "Elegiste papel" << endl;
		break;

	case 3:
		cout << "Elegiste Tijera" << endl;
		break;

		
	}
	srand(time(NULL));
	r = rand() % 3 + 1;

	cout << "Tu rival eligio ";

	switch (r) {
	case 1:	
		cout << "Piedra" << endl;
		break;
	case 2:
		cout << "papel" << endl;
		break;

	case 3:
		cout << "Tijera" << endl;
		break;
	}
		cout << "Quieres volver a jugar?" << endl;
			cout << "1.Si \n 2.No" << endl;
	cin >> op;
	if (op == 1) {
		juego();
	}
}

void juego() {
	system("cls");
	cout << "Bienvenido, vamos a jugar piedra, papel o tijera." << endl;
	cout << "Introduce" << endl;
	cout << "1.Piedra \n 2.Papel \n 3.Tijera" << endl;
	cin >> op;
	switch (op) {
	case 1:
		cout << "Elegiste Piedra" << endl;
		break;
	case 2:
		cout << "Elegiste papel" << endl;
		break;

	case 3:
		cout << "Elegiste Tijera" << endl;
		break;

	}
		srand(time(NULL));
		r = rand() % 3 + 1;

		cout << "Tu rival eligio ";

		switch (r) {
		case 1: 
			cout << "Piedra" << endl;
			break;
		case 2:
			cout << "papel" << endl;
			break;

		case 3:
			cout << "Tijera" << endl;
			break;
		}
		cout << "Quieres volver a jugar?" << endl;
		cout << "1.Si \n 2.No" << endl;
		cin >> op;
		if (op == 1) {
			juego();
		}
}