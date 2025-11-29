#include <iostream>
using namespace std;

void sebutSatuan(int n) {
    if (n == 1) cout << "satu";
    else if (n == 2) cout << "dua";
    else if (n == 3) cout << "tiga";
    else if (n == 4) cout << "empat";
    else if (n == 5) cout << "lima";
    else if (n == 6) cout << "enam";
    else if (n == 7) cout << "tujuh";
    else if (n == 8) cout << "delapan";
    else if (n == 9) cout << "sembilan";
}

void terbilang(int n) {
    if (n >= 1 && n <= 9) {
        sebutSatuan(n);
    } else if (n == 10) {
        cout << "sepuluh";
    } else if (n == 11) {
        cout << "sebelas";
    } else if (n >= 12 && n <= 19) {
        sebutSatuan(n % 10);
        cout << " belas";
    } else if (n >= 20 && n <= 99) {
        sebutSatuan(n / 10);
        cout << " puluh";
        if (n % 10 != 0) {
            cout << " ";
            sebutSatuan(n % 10);
        }
    } else {
        cout << "di luar jangkauan";
    }
}

int main() {
    int angka;
    char ulang;

    do {
        cout << "Masukkan angka : ";
        cin >> angka;

        cout << "Terbilang : ";
        terbilang(angka);
        cout << endl;

        cout << "Ulangi (y/t)? ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
