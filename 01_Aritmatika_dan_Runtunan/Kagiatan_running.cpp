// ============================================================
// PROGRAM       : Menghitung durasi lari dan rata rata lama berlari
// TENTANG       : Menampilkan informasi durasi lari dan rata rata lama berlari 
// PEMROGRAM     : Farel Riyan Fajar Riyadi
// BAHASA        : C++
// MATERI        : Soal studi kasus lari (1Minggu)
// VERSI         : 1.0
// ============================================================

#include <iostream>
#include <string>

using namespace std;


// ============================================================
// KAMUS PENAMAAN VARIABEL
// ============================================================

// ============================== HARI SENIN ==========================
// ============================== DATA ================================
string hari1 = "Senin";
int tanggal1 = 1;
string Bulan1 = "September";
int tahun1 = 2025;
int wbj1 = 7;
int wbm1 = 10;
int wbd1 = 0;
int wfj1 = 7;
int wfm1 = 38;
int wfd1 = 20;
string catatan1 = "Cerah";
// ==== ALGORITMA PENGHITUNGAN WAKTU UNTUK KONVERT DETIK HARI SENIN====
int detik1_senin;
int detik2_senin;
int durasi_detik_senin;
// ======================== MENAMPILKAN HASIL DATA UNTUK OUTPUT=====================
int hasil_jam_senin;
int hasil_menit_senin;
int hasil_detik_senin;
string durasi_senin;


// ============================= HARI SELASA ==========================
// ============================ DATA ================================
string hari2 = "Selasa";
int tanggal2 = 2;
string Bulan2 = "September";
int tahun2 = 2025;
int wbj2 = 7;
int wbm2 = 12;
int wbd2 = 30;
int wfj2 = 7;
int wfm2 = 41;
int wfd2 = 15;
string catatan2 = "Sedikit ramai";
// ==== ALGORITMA PENGHITUNGAN WAKTU UNTUK KONVERT DETIK HARI SENIN====
int detik1_selasa;
int detik2_selasa;
int durasi_detik_selasa;
// ======================== MENAMPILKAN HASIL DATA UNTUK OUTPUT=====================
int hasil_jam_selasa;
int hasil_menit_selasa;
int hasil_detik_selasa;
string durasi_selasa;


// ============================= HARI RABU ==========================
// ============================ DATA ================================
string hari3 = "Rabu";
int tanggal3 = 3;
string Bulan3 = "September";
int tahun3 = 2025;
int wbj3 = 7;
int wbm3 = 5;
int wbd3 = 45;
int wfj3 = 7;
int wfm3 = 33;
int wfd3 = 50;
string catatan3 = "Lancar";
// ==== ALGORITMA PENGHITUNGAN WAKTU UNTUK KONVERT DETIK HARI RABU====
int detik1_rabu;
int detik2_rabu;
int durasi_detik_rabu;
// ======================== MENAMPILKAN HASIL DATA UNTUK OUTPUT=====================
int hasil_jam_rabu;
int hasil_menit_rabu;
int hasil_detik_rabu;
string durasi_rabu;


// ============================= HARI KAMIS ==========================
// ============================ DATA ================================
string hari4 = "Kamis";
int tanggal4 = 4;
string Bulan4 = "September";
int tahun4 = 2025;
int wbj4 = 7;
int wbm4 = 15;
int wbd4 = 20;
int wfj4 = 7;
int wfm4 = 44;
int wfd4 = 10;
string catatan4 = "Sedikit Hujan";
// ==== ALGORITMA PENGHITUNGAN WAKTU UNTUK KONVERT DETIK HARI KAMIS====
int detik1_kamis;
int detik2_kamis;
int durasi_detik_kamis;
// ======================== MENAMPILKAN HASIL DATA UNTUK OUTPUT=====================
int hasil_jam_kamis;
int hasil_menit_kamis;
int hasil_detik_kamis;
string durasi_kamis;


// ============================= HARI JUMAT ==========================
// ============================ DATA ================================
string hari5 = "Jumat";
int tanggal5 = 5;
string Bulan5 = "September";
int tahun5 = 2025;
int wbj5 = 7;
int wbm5 = 8;
int wbd5 = 10;
int wfj5 = 7;
int wfm5 = 36;
int wfd5 = 40;
string catatan5 = "Sedikit Hujan";
// ==== ALGORITMA PENGHITUNGAN WAKTU UNTUK KONVERT DETIK HARI JUMAT====
int detik1_jumat;
int detik2_jumat;
int durasi_detik_jumat;
// ======================== MENAMPILKAN HASIL DATA UNTUK OUTPUT=====================
int hasil_jam_jumat;
int hasil_menit_jumat;
int hasil_detik_jumat;
string durasi_jumat;

// ALGORITMA UNTUK MENCARI RATA RATA LAMA LARI
int durasi_hasil_detik_rata_rata;
int durasi_jam_rata_rata;
int durasi_menit_rata_rata;
int durasi_detik_rata_rata;
string rata_rata_lama_lari;

// TAMBAHAN JARAK
float jarak = 2.5;


// ============================================================
// DESKRIPSI PROGRAM
// ============================================================

int main()
{
    // BAGIAN PENGHITUNGAN WAKTU UNTUK KONVERT DETIK HARI SENIN
    // Convert waktu ke detik.
    // untuk mengjitung selisih detik waktu berangkat dan finis hari senin
    detik1_senin = (wbj1 * 3600) + (wbm1 * 60) + wbd1;
    detik2_senin = (wfj1 * 3600) + (wfm1 * 60) + wfd1;
    durasi_detik_senin = detik2_senin - detik1_senin;
    
    // Menghitung hasil konversi detik ke jam, menit, dan detik
    hasil_jam_senin = durasi_detik_senin / 3600;
    hasil_menit_senin = (durasi_detik_senin % 3600) / 60;
    hasil_detik_senin = durasi_detik_senin % 60;

    // Menampilkan hasil konversi detik ke jam, menit, dan detik
    durasi_senin =  to_string(hasil_jam_senin) + " Jam "
                    + to_string(hasil_menit_senin) + " Menit "
                    + to_string(hasil_detik_senin) + " Detik";


    // BAGIAN PENGHITUNGAN WAKTU UNTUK KONVERT DETIK HARI SELASA
    // Convert waktu ke detik.
    // untuk mengjitung selisih detik waktu berangkat dan finis hari selasa
    detik1_selasa = (wbj2 * 3600) + (wbm2 * 60) + wbd2;
    detik2_selasa = (wfj2 * 3600) + (wfm2 * 60) + wfd2;
    durasi_detik_selasa = detik2_selasa - detik1_selasa;

    // Menghitung hasil konversi detik ke jam, menit, dan detik
    hasil_jam_selasa = durasi_detik_selasa / 3600;
    hasil_menit_selasa = (durasi_detik_selasa % 3600) / 60;
    hasil_detik_selasa = durasi_detik_selasa % 60;

    // Menampilkan hasil konversi detik ke jam, menit, dan detik
    durasi_selasa =  to_string(hasil_jam_selasa) + " Jam "
                    + to_string(hasil_menit_selasa) + " Menit "
                    + to_string(hasil_detik_selasa) + " Detik";


    // BAGIAN PENGHITUNGAN WAKTU UNTUK KONVERT DETIK HARI RABU
    // Convert waktu ke detik.
    // untuk mengjitung selisih detik waktu berangkat dan finis hari rabu
    detik1_rabu = (wbj3 * 3600) + (wbm3 * 60) + wbd3;
    detik2_rabu = (wfj3 * 3600) + (wfm3 * 60) + wfd3;
    durasi_detik_rabu = detik2_rabu - detik1_rabu;

    // Menghitung hasil konversi detik ke jam, menit, dan detik
    hasil_jam_rabu = durasi_detik_rabu / 3600;
    hasil_menit_rabu = (durasi_detik_rabu % 3600) / 60;
    hasil_detik_rabu = durasi_detik_rabu % 60;

    // Menampilkan hasil konversi detik ke jam, menit, dan detik
    durasi_rabu =  to_string(hasil_jam_rabu) + " Jam "
                    + to_string(hasil_menit_rabu) + " Menit "
                    + to_string(hasil_detik_rabu) + " Detik";

    
    // BAGIAN PENGHITUNGAN WAKTU UNTUK KONVERT DETIK HARI KAMIS
    // Convert waktu ke detik.
    // untuk mengjitung selisih detik waktu berangkat dan finis hari kamis
    detik1_kamis = (wbj4 * 3600) + (wbm4 * 60) + wbd4;
    detik2_kamis = (wfj4 * 3600) + (wfm4 * 60) + wfd4;
    durasi_detik_kamis = detik2_kamis - detik1_kamis;

    // Menghitung hasil konversi detik ke jam, menit, dan detik
    hasil_jam_kamis = durasi_detik_kamis / 3600;
    hasil_menit_kamis = (durasi_detik_kamis % 3600) / 60;
    hasil_detik_kamis = durasi_detik_kamis % 60;

    // Menampilkan hasil konversi detik ke jam, menit, dan detik
    durasi_kamis =  to_string(hasil_jam_kamis) + " Jam "
                    + to_string(hasil_menit_kamis) + " Menit "
                    + to_string(hasil_detik_kamis) + " Detik";


    // // BAGIAN PENGHITUNGAN WAKTU UNTUK KONVERT DETIK HARI JUMAT
    // Convert waktu ke detik.
    // untuk mengjitung selisih detik waktu berangkat dan finis hari JUMAT
    detik1_jumat = (wbj5 * 3600) + (wbm5 * 60) + wbd5;
    detik2_jumat = (wfj5 * 3600) + (wfm5 * 60) + wfd5;
    durasi_detik_jumat = detik2_jumat - detik1_jumat;

    // Menghitung hasil konversi detik ke jam, menit, dan detik
    hasil_jam_jumat = durasi_detik_jumat / 3600;
    hasil_menit_jumat = (durasi_detik_jumat % 3600) / 60;
    hasil_detik_jumat = durasi_detik_jumat % 60;

    // Menampilkan hasil konversi detik ke jam, menit, dan detik
    durasi_jumat =  to_string(hasil_jam_jumat) + " Jam "
                    + to_string(hasil_menit_jumat) + " Menit "
                    + to_string(hasil_detik_jumat) + " Detik";


    // MENGHITUNG RATA RATA LAMA BERLARI
    // RUMUSNYA JUMLAH KAN SEMUA DETIK TANGGAL LALU DIBAGI DENGAN 5 HARI
    durasi_hasil_detik_rata_rata = (durasi_detik_senin + durasi_detik_selasa + durasi_detik_rabu + durasi_detik_kamis + durasi_detik_jumat) / 5;

    durasi_jam_rata_rata = durasi_hasil_detik_rata_rata / 3600;
    durasi_menit_rata_rata = (durasi_hasil_detik_rata_rata % 3600) / 60;
    durasi_detik_rata_rata = durasi_hasil_detik_rata_rata % 60;

    rata_rata_lama_lari = to_string(durasi_jam_rata_rata) + " Jam"
                            + to_string(durasi_menit_rata_rata) + " Menit"
                            + to_string(durasi_detik_rata_rata) + " Detik";

    //

    // ======================= MENAMPILKAN HASIL DATA UNTUK OUTPUT=====================
    cout << "=============================================================" << endl;
    cout << "PROGRAM MENGHITUNG DURASI LARI DAN RATA RATA LAMA BERLARI" << endl;
    cout << "=============================================================" << endl;
    
    // ======================= MENAMPILKAN HASIL DATA UNTUK OUTPUT SENIN=====================
    cout << hari1 << " " << tanggal1 << " " << Bulan1 << " " << tahun1 << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "Durasi Lari    : " << durasi_senin << endl;
    cout << "Catatan        : " << catatan1 << endl;
    cout << "Jarak tempuh   : " << jarak << endl;


    // ======================= MENAMPILKAN HASIL DATA UNTUK OUTPUT SELASA=====================
    cout << "=============================================================" << endl;
    cout << hari2 << " " << tanggal2 << " " << Bulan2 << " " << tahun2 << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "Durasi Lari    : " << durasi_selasa << endl;
    cout << "Catatan        : " << catatan2 << endl;
    cout << "Jarak tempuh   : " << jarak << endl;


    // ======================= MENAMPILKAN HASIL DATA UNTUK OUTPUT RABU=====================
    cout << "=============================================================" << endl;
    cout << hari3 << " " << tanggal3 << " " << Bulan3 << " " << tahun3 << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "Durasi Lari    : " << durasi_rabu << endl;
    cout << "Catatan        : " << catatan3 << endl;
    cout << "Jarak tempuh   : " << jarak << endl;


    // ====================== MENAMPILKAN HASIL DATA UNTUK OUTPUT KAMIS=====================
    cout << "=============================================================" << endl;
    cout << hari4 << " " << tanggal4 << " " << Bulan4 << " " << tahun4 << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "Durasi Lari    : " << durasi_kamis << endl;
    cout << "Catatan        : " << catatan4 << endl;
    cout << "Jarak tempuh   : " << jarak << endl;


    // ====================== MENAMPILKAN HASIL DATA UNTUK OUTPUT JUMAT=====================
    cout << "=============================================================" << endl;
    cout << hari5 << " " << tanggal5 << " " << Bulan5 << " " << tahun5 << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "Durasi Lari    : " << durasi_jumat << endl;
    cout << "Catatan        : " << catatan5 << endl;
    cout << "Jarak tempuh   : " << jarak << endl;

    
    cout << "=============================================================" << endl;
    cout << "RATA RATA LAMA BERLARI: " << rata_rata_lama_lari << endl;
    cout << "=============================================================" << endl;


    return 0;

}