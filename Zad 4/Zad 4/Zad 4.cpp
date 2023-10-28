
#include <iostream>
using namespace std;

int main()
{
	int podstawa, wykladnik, wynik = 1;
	cout << "Podaj podstawe:\n";
	cin >> podstawa;
	cout << "Podaj wykladnik:\n";
	cin >> wykladnik;
	for (int i = 0; i < wykladnik; i++) {
		wynik *= podstawa;
	}
	cout << "Wynik:" << wynik << endl;
}