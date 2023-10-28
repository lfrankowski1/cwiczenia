//Popros uzytkownika o wprowadznie liczby calkowitej, a nastepnie oblicz sume jej cyfr
#include <iostream>
using namespace std;
int main()
{
	int liczba, wynik;
	wynik = 0;
	cout << "Podaj liczbe calkowita:\n";
	cin >> liczba;
	while (liczba > 0) {
		wynik += liczba % 10;
		liczba /= 10;
	}
	cout << "Wynik:" << wynik << endl;
}
