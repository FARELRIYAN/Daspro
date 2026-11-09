// Kelipatan bilangan bulat positif. Tampilkan seluruh kepitan 3 yang tidak melebihi nilai n. 
// Misal n = 10, maka keluaran: 3, 6, 9
#include <iostream>
using namespace std;

// Kamus
int nilai;
int bilangan;

// Deskripsi
int main()
{
    cout << "Masukkan bilangan bulat positif: ";
    cin >> nilai;

    cout << "Kelipatan 3 yang tidak melebihi " << nilai << " adalah: ";
    for (bilangan = 3; bilangan <= nilai; bilangan += 3) {
        cout << bilangan;
        if (bilangan + 3 <= nilai) {
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}