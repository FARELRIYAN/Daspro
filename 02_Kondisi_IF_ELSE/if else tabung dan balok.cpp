// Judul
// ============================================================
// PROGRAM       : Kondisi IF Statement menghitung bangun ruang
// TENTANG       : Memahami kondisi if Statement dalam C++
// OLEH          : Farel Riyan Fajar Riyadi
// NIM           : A11.2026.16629
// ============================================================
#include <iostream>
using namespace std;


// Kamus
double phi;
double r;
double t;
double p;
double l;
double volume_tabung;
double luas_permukaan_tabung;
double volume_balok;
double luas_balok;

int pilihan; //Pilihan Bangun Ruang
int opsi; // Pilihan Menu Bangun Ruang

// Deskripsi
int main ()
{
    cout << "====PILIHAN MAU NGITUNG APA==="<< endl;
    cout << "1. Tabung" << endl;
    cout << "2. Balok" << endl;
    cout << "--------------------------------" << endl;
    cin >> pilihan;

    // Bagian Tabung
    if (pilihan == 1) {
        cout << "Masukan jari-jari tabung       : "; cin >> r;
        cout << "Masukan tinggi tabung          : "; cin >> t;
        cout << "---------------------------------" << endl;
        cout << "Pilih menu yang ingin dihitung : " << endl;
        cout << "1. Volume tabung" << endl;
        cout << "2. Luas permukaan tabung" << endl;
        cout << "---------------------------------" << endl;
        cin >> opsi;

        // Menghitung rumus
        phi = 3.14;
        volume_tabung = phi * r * r * t;
        luas_permukaan_tabung = 2 * phi * r * (r + t);

        if (opsi == 1) {
            cout << "Volume tabung: " << volume_tabung << endl;
        } else if (opsi == 2) {
            cout << "Luas permukaan tabung: " << luas_permukaan_tabung << endl;
        } else {
            cout << "Pilihan tidak tersedia." << endl;
        }

    // Bagian Balok
    } else if (pilihan == 2) {
        cout << "Masukan panjang balok: "; cin >> p;
        cout << "Masukan lebar balok  : "; cin >> l;
        cout << "Masukan tinggi balok : "; cin >> t;
        cout << "---------------------------------" << endl;
        cout << "Pilih menu yang ingin dihitung : " << endl;
        cout << "1. Volume balok" << endl;
        cout << "2. Luas permukaan balok" << endl;
        cout << "---------------------------------" << endl;
        cin >> opsi;

        // Menghitung rumus
        volume_balok = p * l * t;
        luas_balok = 2 * (p * l + p * t + l * t);

        if (opsi == 1) {
            cout << "Volume balok: " << volume_balok << endl;
        } else if (opsi == 2) {
            cout << "Luas permukaan balok: " << luas_balok << endl;
        } else {
            cout << "Pilihan tidak tersedia." << endl;
        }

    } else {
        cout << "Bangun ruang tidak tersedia." << endl;
    }


    return 0;
}