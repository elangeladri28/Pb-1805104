#include <iostream>
using namespace std;
int main() {
	char nombre[20];
	char apellido[20];
	int edad;
	char telefono[20];
	cout << "Inserte su primer apellido: "; cin >> apellido;
	cout << "Inserte su primer nombre: "; cin >> nombre;
	cout << "Inserte su edad: "; cin >> edad;
	cout << "inserte su numero de telefono (celular): "; cin >> telefono;

	cout << "\nSu apellido es: " << apellido << endl;
	cout << "Su nombre es: " << nombre << endl;
	cout << "Su edad es: " << edad << " anios." << endl;
	cout << "Y su numero de telefono es +52" << telefono << endl;
	
	system("pause");
	 
	return 0;
}