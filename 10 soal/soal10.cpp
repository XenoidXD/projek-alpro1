#include <iostream>
#include <string>
using namespace std;

int putar(int n) {
    if (n < 1) return n + 12;
    if (n > 12) return n - 12;
    return n;
}

string sifatWarna(int n) {
    if (n == 1 || n == 2 || n == 3 || n == 4 || n == 11 || n == 12)
        return "Warna Hangat";
    else
        return "Warna Sejuk";
}

string jenisWarna(int n) {
    if (n == 3 || n == 7 || n == 11)
        return "Warna Primer";
    else if (n == 1 || n == 5 || n == 9)
        return "Warna Sekunder";
    else
        return "Warna Tersier";
}

int main() {
    string nama, nim;
    int pilihan;
    char pilihPerpaduan;

    string namaWarna[13] = {
        "",
        "Orange",
        "Red-Orange",
        "Red",
        "Red-Violet",
        "Violet",
        "Blue-Violet",
        "Blue",
        "Blue-Green",
        "Green",
        "Yellow-Green",
        "Yellow",
        "Yellow-Orange"
    };

    cout << "Nama : ";
    getline(cin, nama);
    cout << "NIM  : ";
    getline(cin, nim);
    cout << endl;

    cout << "Program Menentukan Sifat Warna, dan Perpaduan Warna Harmonis" << endl;
    cout << "Dengan keterangan:" << endl;
    cout << "1.  Orange" << endl;
    cout << "2.  Red-Orange" << endl;
    cout << "3.  Red" << endl;
    cout << "4.  Red-Violet" << endl;
    cout << "5.  Violet" << endl;
    cout << "6.  Blue-Violet" << endl;
    cout << "7.  Blue" << endl;
    cout << "8.  Blue-Green" << endl;
    cout << "9.  Green" << endl;
    cout << "10. Yellow-Green" << endl;
    cout << "11. Yellow" << endl;
    cout << "12. Yellow-Orange" << endl;
    cout << endl;

    cout << "Pilihan warna nomor : ";
    cin >> pilihan;
    cout << endl;

    if (pilihan < 1 || pilihan > 12) {
        cout << "Pilihan tidak valid." << endl;
        return 0;
    }

    cout << "Warna yang dipilih : " << namaWarna[pilihan] << endl;
    cout << "Sifat warna        : " << sifatWarna(pilihan) << endl;
    cout << "Jenis warna        : " << jenisWarna(pilihan) << endl;
    cout << endl;

    cout << "Pilihan perpaduan warna harmonis:" << endl;
    cout << "a. Perpaduan warna Analogous" << endl;
    cout << "b. Perpaduan warna Complementary" << endl;
    cout << "c. Perpaduan warna Split Complementary" << endl;
    cout << "d. Perpaduan warna Triadic" << endl;
    cout << "e. Perpaduan warna Tetrad" << endl;
    cout << endl;

    cout << "Masukkan pilihan perpaduan (a-e) : ";
    cin >> pilihPerpaduan;
    cout << endl;

    int b = pilihan;

    if (pilihPerpaduan == 'a' || pilihPerpaduan == 'A') {
        int np1 = putar(b + 1);
        int np2 = putar(b + 2);
        int nm1 = putar(b - 1);
        int nm2 = putar(b - 2);
        cout << "Perpaduan Analogous      : {"
             << b << ", " << np1 << ", " << np2 << "}, {"
             << b << ", " << np1 << ", " << nm1 << "}, {"
             << b << ", " << nm1 << ", " << nm2 << "}" << endl;
    } else if (pilihPerpaduan == 'b' || pilihPerpaduan == 'B') {
        int c2 = putar(b + 6);
        cout << "Perpaduan Complementary  : {"
             << b << ", " << c2 << "}" << endl;
    } else if (pilihPerpaduan == 'c' || pilihPerpaduan == 'C') {
        int s1 = putar(b + 5);
        int s2 = putar(b + 7);
        int s3 = putar(b - 5);
        int s4 = putar(b + 2);
        int s5 = putar(b - 2);
        int s6 = putar(b - 7);
        cout << "Perpaduan Split Complementary : {"
             << b << ", " << s1 << ", " << s2 << "}, {"
             << b << ", " << s3 << ", " << s4 << "}, {"
             << b << ", " << s5 << ", " << s6 << "}" << endl;
    } else if (pilihPerpaduan == 'd' || pilihPerpaduan == 'D') {
        int t1 = putar(b + 4);
        int t2 = putar(b + 8);
        cout << "Perpaduan Triadic        : {"
             << b << ", " << t1 << ", " << t2 << "}" << endl;
    } else if (pilihPerpaduan == 'e' || pilihPerpaduan == 'E') {
        int e1 = putar(b + 3);
        int e2 = putar(b + 6);
        int e3 = putar(b + 9);
        cout << "Perpaduan Tetrad         : {"
             << b << ", " << e1 << ", " << e2 << ", " << e3 << "}" << endl;
    } else {
        cout << "Pilihan perpaduan tidak valid." << endl;
    }

    return 0;
}
