// ===============================================================
// PROGRAM       : Latihan Lab-01 Kasus 3
// TENTANG       : Tugas di kulino
// PEMROGRAM     : Farel Riyan Fajar Riyadi
// BAHASA        : C++
// MATERI        : Latihan Lab-01 Kasus 3
// VERSI         : 1.0
// ALUR          : Program menghasilkan deret angka
// ===============================================================

#include <iostream>
using namespace std;

int i_a;
int i_b;

int main ()
{
    // 1. INPUT (Pastikan ditaruh di atas sebelum dihitung)
    cout << "===============================" << endl;
    cout << "PROGRAM MENGHITUNG DERET" << endl;
    cout << "===============================" << endl;
    cout << "MASUKAN NILAI A    : "; cin >> i_a;
    cout << "MASUKAN NILAI B    : "; cin >> i_b;

    // 2. RUMUS (Sesuai aturan: jika A lebih besar dari B maka B dikalikan 2)
    if (i_a > i_b) {
        i_b = i_b * 2; 
    }

    // 3. OUTPUT
    cout << "HASIL DARI BILANGAN DERET : " << endl;
    
    // Perulangan menurun Output 1 dan Output 2 angkanya dicetak mundur dari B ke A)
    for (int i = i_b; i >= i_a; i--) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}