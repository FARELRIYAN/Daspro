// Judul
// Jalan cerita manajer kredit
#include <iostream>
using namespace std;

// Kamus
string nama;
// string pertemuan_1, pertemuan_2, pertemuan_3, pertemuan_4;
int hutang, nominal_bayar, sisa_hutang, days, max_days;

// Deskripsi
int main ()
{
    hutang = 100000;
    nominal_bayar = 25000;
    days = 1;
    max_days = 4;

    while (days <= max_days) {
        sisa_hutang = hutang - nominal_bayar;
        cout << "Pertemuan " << days << ": Sisa hutang " << sisa_hutang << endl;
        hutang = sisa_hutang;
        days = days + 1;
    }

    return 0;

}