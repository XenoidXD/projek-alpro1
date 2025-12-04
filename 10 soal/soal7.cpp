#include <iostream>
using namespace std;

void Konversi(int bilangan, string &terbilang) {
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", 
                       "enam", "tujuh", "delapan", "sembilan"};
    
    if (bilangan <= 0 || bilangan > 99) {
        terbilang = "Angka di luar jangkauan (1-99)";
        return;
    }

    if (bilangan < 10) { 
        terbilang = satuan[bilangan];
    } else if (bilangan == 10) {
        terbilang = "sepuluh";
    } else if (bilangan == 11) {
        terbilang = "sebelas";
    } else if (bilangan < 20) {
        terbilang = satuan[bilangan % 10] + " belas";
    } else {
        int puluhan = bilangan / 10;
        int sisa = bilangan % 10;

        terbilang = satuan[puluhan] + " puluh";
        if (sisa != 0) {
            terbilang += " " + satuan[sisa];
        }
    }
}

int main() {
    int bilangan;
    char ulang;

    do {
        cout << "Masukkan angka (1-99): ";
        cin >> bilangan;

        string hasil;
        Konversi(bilangan, hasil);

        cout << "Terbilang : " << hasil << endl;

        cout << "Ulangi (y/t)? ";
        cin >> ulang;
        cout << endl;
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
