#include <iostream>
#include <string>
using namespace std;

int opcion;
int m = 1;
int nums;
int cantnums;
bool resp;
struct Alumno {
	string NombreAlum;
	string ApellidoAlum;
	char Mat[20];
	char Tel[12];
	char CorreoElec[100];
	string Direccion1;
	string Direccion2;
};
int A = 0;
Alumno Alum[5000];
void alumnos();
void submenu();
void calificaciones();
void manual();
void IngresarAlum();
void BorrarAlum();
void EditarAlum();
void MostrarAlumReg();


int main() {
	locale::global(locale("spanish"));
	cout << "Bienvenido amigo :)" << endl;
	cout << "¿Que deseas hacer?" << endl;
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
	system("pause > nul");

	return 0;
}

void alumnos() {
	system("cls");
	cout << "Estas en el menu de alumnos" << endl;
	cout << "¿Que deseas hacer?" << endl;
	cout << "1.Ingresar alumno \n 2.Borrar alumno \n 3.Editar alumno \n 4.Mostrar alumnos registrados \n 5.Salir" << endl;
	cin >> opcion;
	switch (opcion) {
	case 1:
		IngresarAlum();
		break;
	case 2:
		BorrarAlum();
		break;
	case 3:
		EditarAlum();
		break;
	case 4:
		MostrarAlumReg();
	default:
		break;
	}
}
void calificaciones() {
	system("cls");
	cout << "Estas en el menu de calificaciones" << endl;
	cout << "¿Quieres hacer algo mas?" << endl;
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
	cout << "¿Quieres hacer algo mas?" << endl;
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
void IngresarAlum() {
	resp = true;
	while (resp) {
		cin.ignore();
		cout << "Escriba el nombre del alumno" << endl;
		getline(cin, Alum[A].NombreAlum);
		cout << "Escriba el apellido del alumno" << endl;
		getline(cin, Alum[A].ApellidoAlum);
		cout << "El nuevo alumno es: " << Alum[A].NombreAlum << " " << Alum[A].ApellidoAlum << endl;
		cout << "La matricula del nuevo alumno es: " << m << endl;
		m = m++;
		cout << "Ingrese el numero de telefono" << endl;
		cin >> Alum[A].Tel;
		nums = 0;
		cantnums = 0;
		for (int i = 0; i < 12; i++) {
			if (Alum[A].Tel[i] >= '0' && Alum[A].Tel[i] <= '9') {
				nums++;
			}

		}
		if (nums < 8 || nums>12) {
			cout << "No tiene los numeros requeridos" << endl;
		}
		cout << "Inserte el correo electronico del alumno" << endl;
		cin >> Alum[A].CorreoElec;
		cout << "Inserte la direccion del alumno" << endl;
		cin.ignore();
		cout << "Calle 1: ";
		getline(cin, Alum[A].Direccion1);
		cout << "Calle 2: ";
		getline(cin, Alum[A].Direccion2);
		cout << "¿Deseas ingresar otro alumno? 1.Si 2.No" << endl;
		cin >> opcion;
		if (opcion == 2) {
			resp = false;
		}
	}
	submenu();
}
void MostrarAlumReg() {
	
}
void BorrarAlum() {

}
void EditarAlum() {

	cout << "¿Que alumno buscas? (Inserte la matricula del alumno)";

}
void submenu() {
	cout << "¿Quieres hacer algo mas?" << endl;
	cout << "1.Menu de calificaciones \n 2.Manual del usuario \n 3.Menu de alumnos \n 4.Salir" << endl;
	cin >> opcion;
	switch (opcion) {
	case 1:
		calificaciones();
		break;
	case 2:
		manual();
		break;
	case 3:
		alumnos();
		break;
	default:
		cout << " " << endl;
	}
}