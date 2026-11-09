// Judul
// Hitung pertambahan
#include <iostream>
using namespace std;

// Kamus
int bil1, tambah;


// Deskripsi

int main ()
{
    bil1 = 5;
    tambah = 1;
    while ( bil1 > 1) {
        cout << bil1 << " x ";
        tambah = tambah * bil1;
        bil1 = bil1 - 1;
    }
    tambah = tambah * bil1;
    cout << bil1 << "=" << tambah << endl;

}
