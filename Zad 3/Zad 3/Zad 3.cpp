//Poproœ u¿ytkownika o wprowadzenie kilku ocen, a nastêpnie oblicz ich œredni¹

#include <iostream>
using namespace std;

int main()
{
    int ile, ocena;
    float suma, srednia;
    suma = 0;
    cout << "Podaj ilosc ocen\n";
    cin >> ile;
    for (int i = 0; i < ile; i++) {
        cout << "Podaj ocene:" << endl;
        cin >> ocena;
        suma += ocena;
    }
    srednia = suma / ile;
    cout << "Srednia: " << srednia << endl;
}

