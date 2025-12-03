#include <iostream>
using namespace std;

void prosesKalimat(char kalimat[]) {
    char hasil[200];
    int i = 0, j = 0, k = 0;

    char kata[20][50];
    int jumlahKata = 0;

    while (kalimat[i] != '\0') {
        if (kalimat[i] != ' ') {
            kata[jumlahKata][k] = kalimat[i];
            k++;
        } else {
            kata[jumlahKata][k] = '\0';
            jumlahKata++;
            k = 0;
        }
        i++;
    }

    kata[jumlahKata][k] = '\0';
    jumlahKata++;

    int idx = 0;
    for (int a = jumlahKata - 1; a >= 0; a--) {
        int b = 0;
        while (kata[a][b] != '\0') {
            hasil[idx] = kata[a][b];
            idx++;
            b++;
        }
        if (a > 0) {
            hasil[idx] = ' ';
            idx++;
        }
    }
    hasil[idx] = '\0';

    cout << "hasil   = " << hasil << endl;
}

int main() {
    char kalimat[200];

    cout << "kalimat = ";
    cin.getline(kalimat, 200);

    prosesKalimat(kalimat);

    return 0;
}
