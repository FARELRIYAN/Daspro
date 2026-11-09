// Judul
// ============================================================
// PROGRAM       : Kondisi IF Statement umum
// TENTANG       : Memahami kondisi if statement dalam C++
// OLEH          : Farel Riyan Fajar Riyadi
// NIM           : A11.2026.16629
// ============================================================
#include <iostream>
using namespace std;

// Kamus
int a, b, c;

// Deskripsi
int main()
{
    cout <<"LATIHAN IF";
    cout <<"masukkan angka ke 1 (a) : ";
    cin >>a;

    // If statement to compare the three numbers
    if (a == 3){
        cout << "a sama dengan 3";
    } else if (a == 1){
        cout << "a sama dengan 1";
    } else {
        cout << "a tidak sama dengan 1 dan 3";
    }

    return 0;
}