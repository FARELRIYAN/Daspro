// Judul: menampilkan bilangan ganjil dan genap
#include <iostream>
using namespace std;

// kamus
int bilangan;

// Deskripsi
int main()
{
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    if (bilangan % 2 == 0) {
        cout << "Bilangan tersebut adalah genap." << endl;
    } else {
        cout << "Bilangan tersebut adalah ganjil." << endl;
    }

    return 0;
}

// Notes: Jika bilangan di ganti dengan tiga maka angka sebelum 3 akan di nyatakan 
// ganjil dan angka setelah 3 akan di nyatakan genap jika itu bilangan genap.