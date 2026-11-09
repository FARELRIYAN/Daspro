// ===============================================================
// PROGRAM       : Latihan Lab-01 Kasus 7
// TENTANG       : Tugas di kulino
// PEMROGRAM     : Farel Riyan Fajar Riyadi
// BAHASA        : C++
// MATERI        : Latihan Lab-01 Kasus 7
// VERSI         : 1.0
// ===============================================================


#include <iostream>
using namespace std;

int main() {
    
    int i = 15, *p, *q;
    p = &i;
    *p = 20;

    cout << "--- Langkah 1 ---" << endl;
    // 1. Tampilkan nilai dari variable i
    cout << "Nilai i sekarang : " << i << endl; 
    // Hasilnya akan 20, karena sudah diubah melalui *p = 20

    cout << "\n--- Langkah 2 ---" << endl;
    // 2. Jika i = 50, tampilkan nilai dari variable i dan p
    i = 50;
    cout << "Nilai i          : " << i << endl;
    // P menyimpan alamat memori (akan tampil huruf/angka acak seperti 0x61ff08)
    cout << "Nilai p (Alamat) : " << p << endl; 
    // *p menampilkan nilai yang ditunjuk oleh p (akan bernilai 50 juga)
    cout << "Nilai *p         : " << *p << endl;

    cout << "\n--- Langkah 3 ---" << endl;
    // 3. q = &i, dan *q = 100
    q = &i;
    *q = 100;
    
    // a. Tampilkan nilai i, q, dan p
    cout << "Nilai i          : " << i << endl;
    cout << "Nilai *p         : " << *p << endl;
    cout << "Nilai *q         : " << *q << endl;
    // Jika ingin melihat alamatnya:
    cout << "Alamat p         : " << p << endl;
    cout << "Alamat q         : " << q << endl;

    return 0;
}