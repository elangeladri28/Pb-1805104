#include<iostream>
using namespace std;
locale::global(locale("spanish"));
void main() {
	char nombre[20];
	char apellido[20];
	int edad;
	cout << "Escriba su nombre: ";
	cin >> nombre;
	cout << "Escriba su apellido:";
	cin >> apellido;
	cout >> "Escriba su edad: ";
	cin >> edad;
	cout >> "Mi nombre es " << nombre << " " << apellido << "y tengo " << edad << " años.";

}