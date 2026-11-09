// 
// Menampilkan angka 
// 10,8, ,6 ,4, 2
// 10,8, ,6 ,4, 2
// Tampilkan sebanyak 4 kali


#include <iostream>
using namespace std;

// Kamus
int  x;
int  y;
int main ()
{
    y = 10;
    while (y>2)
    {
        cout << y << endl;
        y = y - 2;
        y = 4;
        while (y > 0)
        {
            cout << x << endl;
            x = x + 4;
            cout << endl;
        }
        
    }
}