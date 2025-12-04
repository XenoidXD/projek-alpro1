#include <iostream>
using namespace std;

int main() {
    int nilai[10];
    int i = 0;

    while (i < 10) {
        cout << "Masukkan nilai ke-" << i+1 << ": ";
        cin >> nilai[i];
        i++;
    }

    int max_nilai = nilai[0];
    i = 1;
    while (i < 10) {
        if (nilai[i] > max_nilai) {
            max_nilai = nilai[i];
        }
        i++;
    }

    int jumlah_max = 0;
    i = 0;
    while (i < 10) {
        if (nilai[i] == max_nilai) {
            jumlah_max++;
        }
        i++;
    }

    cout << "Nilai tertinggi = " << max_nilai << endl;
    cout << "Banyaknya mahasiswa memiliki nilai tertinggi = " << jumlah_max << endl;

    return 0;
}
