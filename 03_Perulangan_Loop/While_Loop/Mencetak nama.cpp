// Judul
// Mencetak Nama
#include <iostream>
using namespace std;

// Kamus
int dinusian;
int x;
int y;

// Deskripsi

int main ()
{
    // Masukan nama
    cout << "========================================\n";
    cout << " Menampilkan 1-20 dan 20-1 \n";
    cout << "========================================\n";

    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";
    //cout << "Dinusian \n ";


    x = 1;
    while (x <= 20)
    {
        y = x;          // mulai dari x (baris ke-2 → mulai 2, baris ke-3 → mulai 3, dst)
        while (y <= 20)
        {
            cout << y << " ";
            y = y + 1;
        }
        cout << endl;
        x++;
    }

}
