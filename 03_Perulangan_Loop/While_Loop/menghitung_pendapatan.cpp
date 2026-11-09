#include <iostream>
using namespace std;

int main() {
    int hari = 1;
    int total_saldo = 0;
    int setoran = 50000;

    // Target Mesin: Menghitung total pendapatan aspal selama 3 hari penuh (Hari 1 sampai 3)
    while (hari < 3) { 
        cout << "Hari " << hari << " dapet " << setoran << endl;
        total_saldo = total_saldo + setoran; 
        hari = hari + 1;
    }

    cout << "Total Saldo Riyan Capital: " << total_saldo << endl;
    return 0;
}