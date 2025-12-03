#include <iostream>
#include <string>
using namespace std;

int iKosong=0;
int totalTim = 0;

void inputTim(string tim[]) {
    int jumlahTim;
    cout << "Masukkan jumlah tim: ";
    cin >> jumlahTim;
    cin.ignore();

    for (int i = 0; i < jumlahTim; i++) {
        cout << "Nama tim ke-" << i + 1 << " : ";
        getline(cin, tim[iKosong]);
        iKosong++;
        totalTim++;
    }
}

void tampilTim(string tim[]) {
    if (totalTim == 0) {
        cout << "Belum ada data tim yang diinput." << endl;
        return;
    }

    int i = 0;
    cout << "Daftar tim peserta Piala Dunia:" << endl;
    while (i < totalTim) {
        cout << "Tim ke-" << i + 1 << " : " << tim[i] << endl;
        i++;
    }
}

int main() {
    string tim[50];
    int pilih;
    bool jalan = true;

    while (jalan) {
        cout << endl;
        cout << "=== PENGELOLAAN DATA TIM PIALA DUNIA ===" << endl;
        cout << "1. Input data tim" << endl;
        cout << "2. Tampilkan data tim" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilih;
        cin.ignore();

        switch (pilih) {
            case 1:
                inputTim(tim);
                break;
            case 2:
                tampilTim(tim);
                break;
            case 3:
                jalan = false;
                break;
            default:
                cout << "Menu tidak valid." << endl;
        }
    }

    return 0;
}
