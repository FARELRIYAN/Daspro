// ===============================================================
// PROGRAM       : Latihan Lab-01 Kasus 4
// TENTANG       : Tugas di kulino
// PEMROGRAM     : Farel Riyan Fajar Riyadi
// BAHASA        : C++
// MATERI        : Latihan Lab-01 Kasus 4
// VERSI         : 1.0
// ALUR          : Array menampilkan nilai terbesar, terkecil, jumlah,rata – rata
// ===============================================================

#include <iostream>

using namespace std;

int a1, a2, a3, a4, a5;

int hasil_array;
int hasil_besar, hasil_kecil;
int jumlah;
float rata_rata;

int main() {

    // INPUT 
    cout << "==========================================================" << endl;
    cout << "MENAMPILKAN NILAI TERBESAR, TERKECIL, DAN JUMLAH RATA RATA" << endl;
    cout << "==========================================================" << endl;
    cout << "Masukan bilangan 1    : " ; cin >> a1;
    cout << "Masukan bilangan 2    : " ; cin >> a2;
    cout << "Masukan bilangan 3    : " ; cin >> a3;
    cout << "Masukan bilangan 4    : " ; cin >> a4;
    cout << "Masukan bilangan 5    : " ; cin >> a5;

    // RUMUS
    
    // MENGHITUNG NILAI TERBESAR
    hasil_besar = a1;
    if (a2 > hasil_besar) hasil_besar = a2;
    if (a3 > hasil_besar) hasil_besar = a3;
    if (a4 > hasil_besar) hasil_besar = a4;
    if (a5 > hasil_besar) hasil_besar = a5;

    // MENGHITUNG NILAI TERKECIL
    hasil_kecil = a1;
    if (a2 > hasil_kecil) hasil_kecil = a2;
    if (a3 > hasil_kecil) hasil_kecil = a3;
    if (a4 > hasil_kecil) hasil_kecil = a4;
    if (a5 > hasil_kecil) hasil_kecil = a5;

    // MENGHITUNG JUMLAH
    jumlah = a1 + a2 + a3 +a4 + a5;

    // RATA RATA
    rata_rata = jumlah / 5;

    // OUTPUT
    cout << "----------------------------------------------------------" << endl;
    cout << "Hasil array    : " << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl;
    cout << "Nilai terbesar : " << hasil_besar << endl;
    cout << "Nilai terkecil : " << hasil_kecil << endl;
    cout << "Jumlah array   : " << jumlah << endl;

    return 0;
}