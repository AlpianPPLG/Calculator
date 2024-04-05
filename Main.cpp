#include <iostream>

using namespace std;

int main() {

	float a,b,hasil;
	char aritmatika;

	cout << "Program Kalkulator Sederhana \n";

	cout << "\n Masukkan Angka Pertama : ";
	cin >> a;

	cout << "\n Pilih Operator +,-.*,/ : ";
	cin >> aritmatika;

	cout << "\n Masukkan Angka Kedua : ";
	cin >> b;

	if(aritmatika != '+' && aritmatika != '-' && aritmatika != '*' && aritmatika != '/') {
		cout << "\n \n Error: Invalid Operator" << endl;
		return -1;	
	}

	if(aritmatika == '/' && a == 0) {
		cout << "\n Infinity";
		return -1;
	}

	if(aritmatika == '/' && b == 0) {
		cout << "\n Infinity";
		return -1;
	}
	
	cout << "\n Hasil Perhitungan:  ";
	cout << a << " " << aritmatika << " " << b << " = ";

	if (aritmatika == '+') {
		hasil = a + b;
	} else if (aritmatika == '-') {
		hasil = a - b;
	} else if (aritmatika == '*') {
		hasil = a * b;
	} else if (aritmatika == '/') {
		hasil = a / b;
	} 
	
	cout << hasil << endl;
	
	cin.get();
    return 0;
}
