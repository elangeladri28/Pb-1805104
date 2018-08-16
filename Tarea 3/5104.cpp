#include <iostream>
using namespace std;
int main() {
	int num;
	int suma;
	cout << "Inserte el numero el cual desea saber la suma de los primeros numeros." << endl;
	cin >> num;
	suma = num * (num + 1) / 2;
	cout << "La suma de los primeros numeros es: " << suma << endl;
	system("pause");
		return 0;
}