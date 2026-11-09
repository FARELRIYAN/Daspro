// ===============================================================
// PROGRAM       : Latihan Lab-01 Kasus 1
// TENTANG       : Tugas di kulino
// PEMROGRAM     : Farel Riyan Fajar Riyadi
// BAHASA        : C++
// MATERI        : Latihan Lab-01 Kasus 1
// VERSI         : 1.0
// ALUR          : Hasil outputnya akan memilih soal terlebih
//                 dahulu lalu mengisi input isi dari setiap soal
// ===============================================================


#include <iostream>

using namespace std;

// ============================================================
// KAMUS PENAMAAN VARIABEL
// ============================================================

// SOAL 1
double s1_a;
double s1_y;

// SOAL 2
double s2_a;
double s2_b;
double s2_c;
double s2_x;
double s2_y;

// SOAL 3
double s3_b1;
double s3_b2;
double s3_b3;
double s3_b4;
double s3_b5;
double s3_jumlah;
double s3_rata_rata;

// SOAL 4
double s4_c;
double s4_h_f;
double s4_h_k;
double s4_h_r;

// Variable tambahan
int pilihan;

// ============================================================
// DESKRIPSI PROGRAM
// ============================================================
int main ()
{
    // Menampilkan piliahan terlebih dahulu
    cout << "================================================" << endl;
    cout << "   TUGAS KASUS 1 - VARIABLE DAN ASSIGNMENT   " << endl;
    cout << "================================================" << endl;
    cout << "1. Hitung y = a^3 + 7" << endl;
    cout << "2. Hitung y = ax^2 + bx + c" << endl;
    cout << "3. Hitung rata rata jumlah bilangan" << endl;
    cout << "4. Konversi Suhu Celscius" << endl;
    cout << "================================================" << endl;
    cin >> pilihan;
    cout << "-----------------------------------------" << endl;

    // SOAL 1
    if (pilihan == 1) {
        cout << "[SOAL 1 MENGHITUNG] y = a^3 + 7" << endl;
        cout << "Masukan nilai a: ";
        cin >> s1_a;

        // Menghitung rumus
        s1_y = (s1_a * s1_a * s1_a) + 7;

        //Menampilkan output
        cout << "Hasil dari y adalah: " << s1_y << endl;
    }

    // SOAL2
    else if (pilihan == 2) {
        cout << "[SOAL 2 MENGHITUNG] y = ax^2 + bx + c" << endl;
        cout << "Masukan nilai a: "; cin >> s2_a;
        cout << "Masukan nilai b: "; cin >> s2_b;
        cout << "Masukan nilai c: "; cin >> s2_c;
        cout << "Masukan nilai x: "; cin >> s2_x;

        // Menghitung rumus
        s2_y = (s2_a * s2_x * s2_x) + (s2_b * s2_x) + s2_c;
        
        // Menampilkan output
        cout << "Hasil dari y adalah: " << s2_y << endl;
    }

    // SOAL 3
    else if (pilihan == 3) {
        cout << "[SOAL 3 MENGHITUNG] RATA RATA JUMLAH BILANGAN" << endl;
        cout << "Masukan bilangan 1: "; cin >> s3_b1;
        cout << "Masukan bilangan 2: "; cin >> s3_b2;
        cout << "Masukan bilangan 3: "; cin >> s3_b3;
        cout << "Masukan bilangan 4: "; cin >> s3_b4;
        cout << "Masukan bilangan 5: "; cin >> s3_b5;

        // Menghitung rumus
        s3_jumlah = s3_b1 + s3_b2 + s3_b4 + s3_b5;
        s3_rata_rata = s3_jumlah / 5;

        // Menampilkan Output
        cout << "Hasil jumlah 5 bilangan tersebut adalah    : " << s3_jumlah << endl;
        cout << "Hasil rata rata 5 bilangan tersebut adalah : " << s3_rata_rata << endl;
    }

    // SOAL 4
    else if (pilihan == 4){
        cout << "[SOAL 4 MENGHITUNG] KONVERSI SUHU CELCIUS KE FAHRENHITE, KELVIN, DAN REAMUR" << endl;
        cout << "Masukan suhu celcius: "; cin >> s4_c;

        // Menghitung rumus
        // Fahrenhite
        s4_h_f = (9.0 / 5.0) * s4_c + 32;
        
        // Kelvin
        s4_h_k = s4_c + 273;

        // Reamur
        s4_h_r = (4.0 / 5.0) * s4_c;

        // Output
        cout << "Hasil dari Fahrenheit  : " << s4_h_f << "F" << endl;
        cout << "Hasil dari Kelvin      : " << s4_h_f << "K" << endl;
        cout << "Hasil dari Reamur      : " << s4_h_f << "R" << endl;
    }
    

    return 0;
}

