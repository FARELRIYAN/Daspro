// Judul menampilkan beasiswa yang diterima oleh mahasiswa
#include <iostream>
using namespace std;

// Kamus
double ipk, kehadiran;
int g_ortu;
char nilai_e;
string hasil;
bool lolos;

// Deskripsi
int main ()
{
    // Awalan Program
    cout << "================================" << endl;
    cout << "Program Beasiswa Mahasiswa" << endl;
    cout << "================================" << endl;

    // Input data
    cout << "Masukan IPK Anda: ";
    cin >> ipk;
    cout << "----------------------------------" << endl;
    cout << "Masukan penghasilan orang tua anda: ";
    cin >> g_ortu;
    cout << "----------------------------------" << endl;
    cout << "Apakah anda memiliki nilai E? y/t: ";
    cin >> nilai_e;
    cout << "----------------------------------" << endl;
    cout << "Berapa presentase nilai kehadiran anda? ";
    cin >> kehadiran;
    cout << "----------------------------------" << endl;

    // Logic
    lolos =  (ipk >= 3.0 && g_ortu < 4000000 && nilai_e == 't' && kehadiran >= 90);
    
    if (lolos) {
        hasil = "Lolos";
    } else {
        hasil = "Tidak Lolos";
    }

    // Output dan hasil
    cout << "================================" << endl;
    cout << "Hasil Pendaftaran Beasiswa Anda" << endl;
    cout << "================================" << endl;
    cout << "IPK: " << ipk << endl;
    cout << "Penghasilan Orang Tua: " << g_ortu << endl;
    cout << "Apakah memiliki nilai E: " << nilai_e << endl;
    cout << "Presentase Kehadiran: " << kehadiran << endl;
    cout << "Hasil: " << hasil << endl;
    cout << "Alasan: " << endl;
    if (ipk < 3.50) {
        cout << "- IPK kurang dari 3.50" << endl;
    } if (g_ortu > 4000000) {
        cout << "- Penghasilan orang tua lebih dari 4 juta" << endl;
    } if (nilai_e == 'y') {
        cout << "- Memiliki nilai E" << endl;
    } if (kehadiran < 90) {
        cout << "- Presentase kehadiran kurang dari 90%" << endl;
    } else {
        cout << "- Semua persyaratan terpenuhi" << endl;
    }


    return 0;
}