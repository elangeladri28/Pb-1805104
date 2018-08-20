#include<iostream>
#include<math.h>
using namespace std;
void main(){
	float radio;
	int angulo;
	float x;
	float y;
		cout << "Inserte la medida del radio: ";
	cin >> radio;
	cout << "Inserte la medida del angulo: ";
	cin >> angulo;
	angulo = angulo * 3.141592 / 180;
	x = cos(angulo)*radio;
	y = sin(angulo)*radio;
	cout << "La coordenada de x es: " << x << endl;
	cout << "La coordenada de y es: " << y << endl;
	system("pause");
}