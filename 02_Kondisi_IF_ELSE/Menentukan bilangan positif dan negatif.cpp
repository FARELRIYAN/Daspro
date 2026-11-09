// Judul: Menentukan bilangan positif
#include <iostream>
using namespace std;

// kamus
double nilai;

// Deskripsi
int main()
{
    cout << "Masukkan bilangan: ";
    cin >> nilai;

    if (nilai > 0) {
        cout << "Bilangan tersebut adalah positif." << endl;
    } else if (nilai < 0)
    {
        cout << "Bilangan tersebut adalah negatif." << endl;
    } else {
        cout << "Bilangan tersebut adalah nol." << endl;
    }

    return 0;
}