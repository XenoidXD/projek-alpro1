#include <iostream>
#include <string>
using namespace std;

int utama() {
    return 0;
}

int main() {
    string nama, nim;
    int pilihan;

    string namaWarna[13] = {
        "",
        "Red-Orange",
        "Orange",
        "Yellow-Orange",
        "Yellow",
        "Yellow-Green",
        "Green",
        "Blue-Green",
        "Blue",
        "Blue-Violet",
        "Violet",
        "Red-Violet",
        "Red"
    };

    cout << "Nama : ";
    getline(cin, nama);
    cout << "NIM  : ";
    getline(cin, nim);

    cout << "Program Menentukan Sifat Warna dan Perpaduan Warna Harmonis" << endl;
    cout << "Daftar Keterangan:" << endl;
    cout << "1. Red-Orange" << endl;
    cout << "2. Orange" << endl;
    cout << "3. Yellow-Orange" << endl;
    cout << "4. Yellow" << endl;
    cout << "5. Yellow-Green" << endl;
    cout << "6. Green" << endl;
    cout << "7. Blue-Green" << endl;
    cout << "8. Blue" << endl;
    cout << "9. Blue-Violet" << endl;
    cout << "10. Violet" << endl;
    cout << "11. Red-Violet" << endl;
    cout << "12. Red" << endl;

    cout << "Pilihan warna nomor : ";
    cin >> pilihan;

    if (pilihan < 1 || pilihan > 12) {
        cout << "Pilihan tidak valid" << endl;
        return 0;
    }

    cout << "Warna yang dipilih: " << namaWarna[pilihan] << endl;

    if (pilihan >= 1 && pilihan <= 6) {
        cout << "Sifat warna: Hangat" << endl;
    } else {
        cout << "Sifat warna: Sejuk" << endl;
    }

    if (pilihan == 4 || pilihan == 8 || pilihan == 12) {
        cout << "Jenis warna: Primer" << endl;
    } else if (pilihan == 2 || pilihan == 6 || pilihan == 10) {
        cout << "Jenis warna: Sekunder" << endl;
    } else {
        cout << "Jenis warna: Tersier" << endl;
    }

    int kiri = pilihan - 1;
    if (kiri < 1) kiri = 12;
    int kanan = pilihan + 1;
    if (kanan > 12) kanan = 1;
    cout << "Perpaduan Analogous (nomor): "
         << kiri << ", " << pilihan << ", " << kanan << endl;

    int komplemen = pilihan + 6;
    if (komplemen > 12) komplemen -= 12;
    cout << "Perpaduan Complementary (nomor): " << pilihan << " - " << komplemen << endl;

    int split1 = komplemen - 1;
    if (split1 < 1) split1 = 12;
    int split2 = komplemen + 1;
    if (split2 > 12) split2 = 1;
    cout << "Perpaduan Split Complementary (nomor): "
         << split1 << ", " << pilihan << ", " << split2 << endl;

    int tri2 = pilihan + 4;
    if (tri2 > 12) tri2 -= 12;
    int tri3 = pilihan + 8;
    if (tri3 > 12) tri3 -= 12;
    cout << "Perpaduan Triadic (nomor): "
         << pilihan << ", " << tri2 << ", " << tri3 << endl;

    int tet2 = pilihan + 3;
    if (tet2 > 12) tet2 -= 12;
    int tet3 = pilihan + 6;
    if (tet3 > 12) tet3 -= 12;
    int tet4 = pilihan + 9;
    if (tet4 > 12) tet4 -= 12;
    cout << "Perpaduan Tetrad (nomor): "
         << pilihan << ", " << tet2 << ", " << tet3 << ", " << tet4 << endl;

    return 0;
}
