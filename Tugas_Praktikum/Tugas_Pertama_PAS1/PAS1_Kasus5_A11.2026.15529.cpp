// ===============================================================
// PROGRAM       : Latihan Lab-01 Kasus 5
// TENTANG       : Tugas di kulino
// PEMROGRAM     : Farel Riyan Fajar Riyadi
// BAHASA        : C++
// MATERI        : Latihan Lab-01 Kasus 5
// VERSI         : 1.0
// ALUR          : program untuk menampilkan dua nilai yaitu x dan y menggunakan struct
// ===============================================================


// KODE 1
// #include <iostream>
// using namespace std;

// struct nilai {
//     int x;
//     int y;
// };

// int main ()
// {
//     // n1 bertipe nilai
//     nilai n1;

//     // nilai variable x dan y dalam nilai
//     n1.x = 5;
//     n1.y = 10;

//     // Output
//     cout << "Nilai variable x adalah : " << n1.x << endl;
//     cout << "Nilai variable x adalah : " << n1.y<< endl;

//     return 0;
// }


// KODE 2
#include <iostream>
using namespace std;

// Menggunakan typedef pada struct
typedef struct {
    int x;
    int y;
} nilai; 

int main()
{
    nilai n1; // Cara pakainya tetap sama
    
    n1.x = 5;
    n1.y = 10;

    cout << "Nilai x: " << n1.x << endl;
    cout << "Nilai y: " << n1.y << endl;

    return 0;
}


// Kesimpulan
// Jika mengunakan typedef maka sudah ada di kamus resmi tidakperlu lagi menulis
// kata struct saat membuat variable langsung dengan nila n1.
// Jika hanya menggunakan struct maka wajib menggunakan kembali kata struct
// seperti struct nilai n1.