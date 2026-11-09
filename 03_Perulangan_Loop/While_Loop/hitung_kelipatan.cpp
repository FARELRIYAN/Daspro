// Judul
// Hitung kelipatan
#include <iostream>
using namespace std;

// Kamus
int bil1, bill_max, kelipatan;

// Deskripsi
int main ()
{
    bil1 = 100;
    bill_max = 150;
    kelipatan = 6;
    while (bil1 <= bill_max)
    {
        cout << bil1 << ",";
        bil1 = bil1 + kelipatan;
    }
    cout << bil1 << "=" << endl;
}