// ===============================================================
// PROGRAM       : Latihan Lab-01 Kasus 6
// TENTANG       : Tugas di kulino
// PEMROGRAM     : Farel Riyan Fajar Riyadi
// BAHASA        : C++
// MATERI        : Latihan Lab-01 Kasus 6
// VERSI         : 1.0
// ===============================================================

#include <iostream>

using namespace std;

// LUAS PERSEGI
int luas_persegi (int n) {
    return n * n;
}

// NILAI GANJIL
bool is_ganjil (int n) {
    return n % 2 != 0;
}

// NILAI GENAP
bool is_genap (int n) {
    return n % 2 == 0;
}

// RUMUS URUTAN DERET
int sum_n(int n) {
    int total = 0;
    cout << "Urutan deret: ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        total += i;
    }
    cout << endl;
    return total;
}

// RUMUS AVG
float avg_n (int n) {
    int total = sum_n(n);
    return (float)total / n;
}


// =======================
// DESKRIPSI
// =======================
int main () {
    int n;
    cout << "Masukan bilangan bulan (n): "; cin >> n;

    cout << "---------------------------------" << endl;
    cout << "Luas persegi       : " << luas_persegi(n) << endl;


    // Menampilkan ganjil genap
    if (is_ganjil(n)) {
        cout << "Status bilangan    : Ganjil (true)" << endl;
    } else if (is_genap(n)) {
        cout << "Status Bilangan    : Genap (false)" << endl;
    }

    cout << "------ MENJALANKAN SUM -----" << endl;
    int hasil_sum = sum_n(n);
    cout << "Hasil Penjumlahan  : " << hasil_sum << endl;

    cout << "------ MENJALANKAN avg -----" << endl;
    int hasil_avg = avg_n(n);
    cout << "Hasil rata rata    : " << hasil_avg << endl;

    return 0;
}