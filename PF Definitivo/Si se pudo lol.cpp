#include <iostream>
#include <string>
#include<stdlib.h>
#include <fstream>
#include <iomanip>
using namespace std;

int opcion;
int m;
int c;
int nums;
int cantnums;
bool resp;
bool vali;
struct Alumno {
	string NombreAlum;
	string ApellidoAlum;
	int Mat;
	char Tel[12];
	char CorreoElec[100];
	string CalleyNum;
	string Colonia;
	float Calif1;
	float Calif2;
	float Calif3;
	float PromFinal;
};
int A;
Alumno Alum[100];
void alumnos();
void submenu();
void calificaciones();
void manual();
void IngresarAlum();
void BorrarAlum();
void EditarAlum();
void MostrarAlumReg();
void BuscarAlumEsp();
void ValidarMatricula();
void ValidarTelefono();
void ValidarCorreo();


int main() {
	locale::global(locale("spanish"));
	ifstream archivo;
	archivo.open("Agenda.txt", ios::in);
	if (archivo.fail()) {
		cout << "Hay problemas con el archivo";
		exit(1);
	}
	archivo.close();
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
	system("pause");

	return 0;
}

void alumnos() {
	system("cls");
	cout << "Estas en el menu de alumnos" << endl;
	cout << "¿Que deseas hacer?" << endl;
	cout << "1.Ingresar alumno \n 2.Borrar alumno \n 3.Editar alumno \n 4.Mostrar alumnos registrados \n 5.Mostrar un alumno en especifico \n 6.Salir" << endl;
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
	case 5:
		BuscarAlumEsp();
	default:
		break;
	}
}
void calificaciones() {
	system("cls");
	cout << "Estas en el menu de calificaciones" << endl;
	cout << "¿A cuál alumno le pondra sus tres calificaciones?" << endl;
	cin >> Alum[A].Mat;
	for (int i = 0; i < A; i++) {
		if (Alum[A].Mat == Alum[i].Mat) {
			system("cls");
			cout << "Encontre la matricula a la cual pondra las calificaciones" << endl;
			cout << "Ingrese la primera calificacion del alumno" << endl;
			cin >> Alum[A].Calif1;
			cout << "Ingrese la segunda calificacion del alumno" << endl;
			cin >> Alum[A].Calif2;
			cout << "Ingrese la tercera calificacion del alumno" << endl;
			cin >> Alum[A].Calif3;
			Alum[A].PromFinal = (Alum[A].Calif1*.30) + (Alum[A].Calif2*.45) + (Alum[A].Calif3*.25);
			cout << fixed << showpoint << setprecision(2);
			cout << "La calificacion final del alumno es: " << Alum[A].PromFinal << endl;
			break;
		}
		else{
			cout << "No se encontro el alumno deseado" << endl;
		}
	}
	submenu();
}
void manual() {
	system("cls");
	cout << "Estas en el manual del usuario" << endl;
	cout << "El programa le dara la bienvenida a la agenda electronica" << endl;
	cout << "La opcion ~Ingresar alumnos~ permitira agregar a los alumnos a la agenda apartir de sus datos" << endl;
	cout << "La opcion ~Calificaciones~ permitira a poder registrar 3 calificaciones en la agenda para cada alumno" << endl;
	cout << "La opcion de ~Editar~ y ~Borrar~ permitiran hacer cambios en los datos de algun alumno" << endl;
	cout << "ES INDISPENSABLE QUE AL MOMENTO DE ELEGIR UNA OPCION SEA SOLO CON NUMEROS" << endl;
	cout << "¿Quieres hacer algo más?" << endl;
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
		system("cls");
		cin.ignore();
		cout << "Escriba el nombre del alumno" << endl;
		getline(cin, Alum[A].NombreAlum);
		cout << "Escriba el apellido del alumno" << endl;
		getline(cin, Alum[A].ApellidoAlum);
		cout << "El alumno es: " << Alum[A].NombreAlum << " " << Alum[A].ApellidoAlum << endl;
		cout << "Ingrese la matricula del alumno" << endl;
		vali = true;
		while (vali) {
			cin >> Alum[A].Mat;
			ValidarMatricula();
		}
		cout << "Ingrese el numero de telefono" << endl;
		vali = true;
		while (vali) {
			cin >> Alum[A].Tel;
			ValidarTelefono();
		}
		cout << "Inserte el correo electronico del alumno" << endl;
		vali = true;
		while (vali) {
			cin >> Alum[A].CorreoElec;
			ValidarCorreo();
		}
		cout << "Inserte la direccion del alumno" << endl;
		cin.ignore();
		cout << "Calle y numero: ";
		getline(cin, Alum[A].CalleyNum);
		cout << "Colonia: ";
		getline(cin, Alum[A].Colonia);
		cout << "¿Deseas ingresar otro alumno? 1.Si 2.No" << endl;
		cin >> opcion;
		A++;
		if (opcion == 2) {
			resp = false;
		}
	}
	submenu();
}
void MostrarAlumReg() {
	system("cls");
	for (int i = 0; i < A; i++) {
		cout << Alum[i].NombreAlum << " " << Alum[i].ApellidoAlum << endl;
		cout << "Matricula: " << Alum[i].Mat << endl;
		cout << "Telefono: "<< Alum[i].Tel << endl;
		cout << "Correo electronico: " << Alum[i].CorreoElec << endl;
		cout << "Direccion del alumno:" << endl;
		cout << "Calle y numero:" << Alum[i].CalleyNum << endl;
		cout << "Colonia: " << Alum[i].Colonia << endl;
		cout << " " << endl;
	}
	system("pause");
	submenu();
}
void BuscarAlumEsp() {
	system("cls");
	cout << "¿Que alumno buscas? (inserta su matricula)" << endl;
	cin >> Alum[A].Mat;
	int i = 0;
	bool b = false;
	while (i < A) {

		if (Alum[i].Mat == Alum[A].Mat) {
			cout << "Se encontro el siguiente alumno" << endl;
			cout << Alum[i].NombreAlum << " " << Alum[i].ApellidoAlum << endl;
			cout << "Matricula: " << Alum[i].Mat << endl;
			cout << "Telefono: " << Alum[i].Tel << endl;
			cout << "Correo electronico: " << Alum[i].CorreoElec << endl;
			cout << "Direccion del alumno:" << endl;
			cout << "Calle y numero:" << Alum[i].CalleyNum << endl;
			cout << "Colonia: " << Alum[i].Colonia << endl;

			b = true;
			system("pause");
			break;
		}
		i++;
		if (!b) {
			cout << "No se encontro el alumno especificado" << endl;
			system("pause");
		}
	}
	submenu();
}

void BorrarAlum() {
	system("cls");
	cout << "¿Que alumno buscas? (inserta su matricula)" << endl;
	cin >> Alum[A].Mat;
	int i = 0;
	bool b = false;
	while (i < A) {

		if (Alum[i].Mat == Alum[A].Mat) {
			cout << "Se encontro el siguiente alumno" << endl;
			cout << Alum[i].NombreAlum << " " << Alum[i].ApellidoAlum << endl;
			cout << "Matricula: " << Alum[i].Mat << endl;
			cout << "Telefono: " << Alum[i].Tel << endl;
			cout << "Correo electronico: " << Alum[i].CorreoElec << endl;
			cout << "Direccion del alumno:" << endl;
			cout << "Calle y numero:" << Alum[i].CalleyNum << endl;
			cout << "Colonia: " << Alum[i].Colonia << endl;
			cout << " " << endl;
			b = true;
			system("pause");
			cout << "¿Deseas eliminar este alumno?" << endl;
			cout << "1.Sí \n 2.No" << endl;
			cin >> opcion;
			if (opcion == 1&&A!=0) {
				for (int j = i; j < A; j++) {
					Alum[j] = Alum[j + 1];
		}
				A--;
				break;
		}
		i++;
	}
	if (!b) {
		cout << "No se encontro el alumno especificado" << endl;
		system("pause");
	}
	
	}
	submenu();
}
void EditarAlum() {
	system("cls");
	cout << "¿Que alumno buscas? (Inserte la matricula del alumno)" << endl;
	cin >> Alum[A].Mat;
	int i = 0;
	while (i < A) {
			if (Alum[i].Mat == Alum[A].Mat) {
				while (1) {
					cout << "¿Qué dato quieres editar?" << endl;
					cout << "1.Nombre \n2.Apellido \n3.Matricula \n4.Telefono \n5.CorreoElectronico \n6.Calle y Numero 7.Colonia" << endl;
					cin >> opcion;
					switch (opcion) {
					case 1:
						cin.ignore();
						cout << "Ingrese el nombre nuevo" << endl;
						getline(cin, Alum[A].NombreAlum);
						break;
					case 2:
						cin.ignore();
						cout << "Ingrese el apellido nuevo" << endl;
						getline(cin, Alum[A].ApellidoAlum);
						break;
					case 3:
						cout << "Ingrese la nueva matricula" << endl;
						while (1) {
							cin >> Alum[A].Mat;
							ValidarMatricula();
						}
						break;
					case 4:
						cout << "Ingrese el nuevo telefono" << endl;
						while (1) {
							cin >> Alum[A].Tel;
							ValidarTelefono();
						}
						break;
					case 5:
						cout << "Ingrese el nuevo correo electronico" << endl;
						while (1) {
							cin >> Alum[A].CorreoElec;
							ValidarCorreo();
						}
						break;
					case 6:
						cin.ignore();
						cout << "Ingrese la nueva calle y el numero" << endl;
						getline(cin, Alum[A].CalleyNum);
						break;
					case 7:
						cin.ignore();
						cout << "Ingrese la nueva colonia" << endl;
						getline(cin, Alum[A].Colonia);
						break;
					default:
						break;
					}
					cout << "¿Deseas editar otra cosa?" << endl;
					cout << "1.Si \n2.No" << endl;
					cin >> opcion;
					if (opcion == 2) break;

				}
			}
		}
	}


void submenu() {
	cout << "¿Quieres hacer algo mas?" << endl;
	cout << "1.Menu de alumnos \n2.Manual de calificaciones \n3.Menu del manual \n4.Salir" << endl;
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
}
void ValidarMatricula() {
	system("cls");
	int i = 0;
		while(i<A){

			if (Alum[A].Mat == Alum[i].Mat) {
				cout << "Esta matricula ya existe, ingrese otra" << endl;
				system("pause");
				vali = true;
				break;
			}
			if (Alum[A].Mat != Alum[i].Mat){
				vali = false;
			}
			i++;
		}
		
}
void ValidarTelefono() {
	int cant = 0;
	system("cls");
	for (int i = 0; i < 12; i++) {
		if (Alum[A].Tel[i] != NULL) {
			cant++;
		}
	}
	if (cant < 8 && cant >12 ) {
		cout << "Faltan numeros o son demasiados" << endl;
	}
	else if (cant >= 8 && cant <= 12) {
		vali = false;
	}
}
void ValidarCorreo() {
	int arroba = 0;
	int puntos = 0;
	for (int i = 0; i < 100; i++) {
		if (Alum[A].CorreoElec[i] == '@') {
			arroba++;
		}
		if (arroba==1&&Alum[A].CorreoElec[i] == '.') {
			puntos++;
			vali = false;
		}

	}
	if (arroba == 0) {
		cout << "No hay @ " << endl;
	}
	else if (arroba>1) {
		cout << "Hay mas de 1 @" << endl;
	}
	else if (puntos == 0) {
		cout << "falta el punto " << endl;
	}
	else if (puntos>1) {
		cout << "Hay mas de un punto" << endl;
	}
	
}