// Judul
#include <iostream>
using namespace std;

// Kamus
int n, baris, kolom;


// Deskripsi
int main ()
{
    cout << "Masukan jumlah baris"; cin >> n;
    
    baris = 1;

    while (baris <= n)
    {
        /* code */
        kolom = 1;
        do
        {
            cout << kolom;
            kolom = kolom +1;
        } while (!(kolom > baris));
        cout << endl;
        baris = baris + 1;
    }
     return 0;
    
}