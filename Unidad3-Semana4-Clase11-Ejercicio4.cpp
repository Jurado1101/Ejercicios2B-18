#include <iostream>
using namespace std;

int main(){
	int num = 0;
	int suma = 0;
	do{
		suma += num;
		cout << "Ingresa un numero: ";
		cin >> num;
	} while(num >= 0);
	cout << "\nLa suma es " << suma << endl;
	return 0;
}
