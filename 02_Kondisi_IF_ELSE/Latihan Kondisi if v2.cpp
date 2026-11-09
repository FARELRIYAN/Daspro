// Judul
// ============================================================
// PROGRAM       : Kondisi IF v2
// TENTANG       : Memahami kondisi if dalam C++
// OLEH          : Farel Riyan Fajar Riyadi
// NIM           : A11.2026.16629
// ============================================================

#include <iostream>
using namespace std;

// Kamus
int a, b;


// Deskripsi
int main()
{
    cout <<"LATIHAN IF";
    cout <<"masukkan angka ke 1 (a) : ";	cin >>a ;
    cout <<"masukkan angka ke 2 (b) : ";	cin >>b ;

    cout <<"Ada data "<<a<<"&"<<b<<endl;

     // kondisi
	if (a>b)
	{
		cout << a << ">" << b;
	}
	else
	    if (a<b)
	        {
		        cout << b << " > " << a;
	        }
	    else
	        {
	            cout << a << " = " << b;
	        }
	return 0;


}