// Judul
// ============================================================
// PROGRAM       : Kondisi IF v1
// TENTANG       : Memahami kondisi if dalam C++
// OLEH          : Farel Riyan Fajar Riyadi
// NIM           : A11.2026.16629
// ============================================================

#include <iostream>
using namespace std;

// Kamus
int a, b;

// Deskripsi
int main()
{
    cout <<"LATIHAN IF";
    cout <<"masukkan angka ke 1 (a) : ";	cin >>a ;
    cout <<"masukkan angka ke 2 (b) : ";	cin >>b ;

    cout <<"Ada data "<<a<<"&"<<b<<endl;

    // Kondisi if
    if (a>b)
    {
        cout <<a<<b;
    } else {
        cout <<b<<a;
    }
    return 0;

}