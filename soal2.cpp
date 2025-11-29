#include <iostream>
using namespace std;

void prosesKalimat(char teks[]) {
    char hasil[201];
    int i = 0;
    while (teks[i] != '\0') {
        char c = teks[i];
        if (c >= 'a' && c <= 'z') {
            hasil[i] = c - 'a' + 'A';
        } else if (c >= 'A' && c <= 'Z') {
            hasil[i] = c - 'A' + 'a';
        } else {
            hasil[i] = c;
        }
        i++;
    }
    hasil[i] = '\0';
    cout << "Kalimat baru: " << hasil << endl;
}

int main() {
    char kalimat[201];

    cout << "Masukkan sebuah kalimat: ";
    cin.getline(kalimat, 200);

    prosesKalimat(kalimat);

    return 0;
}
