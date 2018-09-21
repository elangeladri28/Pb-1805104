#include<iostream>
#include "Pryecto final 1.h"
using namespace std;


int opcion;

void alumnos();
void calificaciones();
void manual();

void main() {
	cout << "Bienvenido amigo :)" << endl;
	cout << "Que deseas hacer?" << endl;
	cout << " 1.Menu de alumnos \n 2.Menu de calificaciones \n 3.Manual del usuario \n 4.Salir" << endl;
	cin >> opcion;
	switch (opcion) {
	case 1:
		alumnos();
		break;
	case 2:
		calificaciones();
		break;
	case 3:
		manual();
		break;
	default:
		cout << " " << endl;
		
	}
	cout << "Buen dia hasta pronto :)" << endl;
	cout << "bye" << endl;
	system("pause > nul");
}

void alumnos() {
	system("cls");
	cout << "Estas en el menu de alumnos" << endl;
	cout << "Quieres hacer algo mas?" << endl;
	cout << "1.Menu de calificaciones \n 2.Manual del usuario \n 3.Salir" << endl;
	cin >> opcion;
	switch (opcion) {
	case 1:
		calificaciones();
		break;
	case 2:
		manual();
		break;
	default:
		cout << " " << endl;
	}
}
void calificaciones() {
	system("cls");
	cout << "Estas en el menu de calificaciones" << endl;
	cout << "Quieres hacer algo mas?" << endl;
	cout << "1.Menu de alumnos \n 2.Manual del usuario \n 3.Salir" << endl;
	cin >> opcion;
	switch (opcion) {
	case 1:
		alumnos();
		break;
	case 2:
		manual();
		break;
	default:
		cout << " " << endl;
	}
}
void manual() {
	system("cls");
	cout << "Estas en el manual del usuario" << endl;
	cout << "Quieres hacer algo mas?" << endl;
	cout << "1.Menu de alumnos \n 2.Manual de calificaciones \n 3.Salir" << endl;
	cin >> opcion;
	switch (opcion) {
	case 1:
		alumnos();
		break;
	case 2:
		calificaciones();
		break;
	default:
		cout << " " << endl;
	}
}