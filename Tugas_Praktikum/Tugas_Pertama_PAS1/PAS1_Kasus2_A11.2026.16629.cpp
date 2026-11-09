// ===============================================================
// PROGRAM       : Latihan Lab-01 Kasus 2
// TENTANG       : Tugas di kulino
// PEMROGRAM     : Farel Riyan Fajar Riyadi
// BAHASA        : C++
// MATERI        : Latihan Lab-01 Kasus 2
// VERSI         : 1.0
// ALUR          : Program menghitung upah lembur karyawan
// ===============================================================

#include <iostream>

using namespace std;

// ============================================================
// KAMUS PENAMAAN VARIABEL
// ============================================================

// SOAL1
float  jam_kerja;
float upah;
float upah_reguler;

float overpay;
float jam_lembur;
float total_upah;

// ============================================================
// DESKRIPSI PROGRAM
// ============================================================

int main ()
{

    // SOAL 1
    cout << "=========================================" << endl;
    cout << "  UPAH LEMBUR KARYAWAN  " << endl;
    cout << "=========================================" << endl;
    cout << "Masukan jam kerja reguler       : "; cin >> jam_kerja;
    cout << "Masukan upah kerja reguler anda : "; cin >> upah;
    cout << "Masukan jam lembur anda         : "; cin >> jam_lembur;

    // RUMUS SOAL 1
    upah_reguler = jam_kerja * upah;
    
    // RUMUS SOAL 2
    if (jam_lembur >= 30) {
        overpay = jam_lembur * upah * 0.40;
    } 
    else if (jam_lembur >=20) {
        overpay = jam_lembur * upah * 0.20;
    }

    // RUMUS SOAL 3
    total_upah = upah_reguler + overpay;

    // MENAMPILKAN HASIL
    cout << "------------------------------------" << endl;
    cout << "Hasil Upah kerja reguler   : Rp " << upah_reguler << endl;
    cout << "Total overpay kerja        : Rp " << overpay << endl;
    cout << "Total upah yang di dapat   : Rp " << total_upah << endl;
    
    return 0;

}
