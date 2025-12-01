#include <iostream>
#include <string>
using namespace std;

void inputTim(string tim[], int &jumlah) {
    cout << "Masukkan jumlah tim: ";
    cin >> jumlah;
    cin.ignore();
    for (int i = 0; i < jumlah; i++) {
        cout << "Nama tim ke-" << i + 1 << " : ";
        getline(cin, tim[i]);
    }
}

void tampilTim(string tim[], int jumlah) {
    int i = 0;
    while (i < jumlah) {
        cout << "Tim ke-" << i + 1 << " : " << tim[i] << endl;
        i++;
    }
}

int main() {
    string tim[50];
    int jumlah = 0;
    int pilih;
    bool jalan = true;

    while (jalan) {
        cout << "Menu Pengelolaan Tim Piala Dunia" << endl;
        cout << "1. Input data tim" << endl;
        cout << "2. Tampilkan data tim" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilih;
        cin.ignore();

        if (pilih == 1) {
            inputTim(tim, jumlah);
        } else if (pilih == 2) {
            tampilTim(tim, jumlah);
        } else if (pilih == 3) {
            jalan = false;
        } else {
            cout << "Menu tidak valid" << endl;
        }

        cout << endl;
    }

    return 0;
}
