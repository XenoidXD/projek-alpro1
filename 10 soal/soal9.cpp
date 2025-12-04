#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    cout << "Nama : "; getline(cin, nama);
    cout << "NIM  : "; getline(cin, nim);

    cout << "Program Menghitung Luas Bangun Datar atau Volume Bangun Ruang" << endl;
    int pilihJenis;
    cout << "Bangun Datar [1] / Bangun Ruang [2]: ";
    cin >> pilihJenis;

    if (pilihJenis == 1) {
        cout << "Menghitung Luas Bangun Datar:" << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Segitiga" << endl;
        cout << "4. Lingkaran" << endl;
        cout << "5. Jajar Genjang" << endl;
        cout << "6. Belah Ketupat" << endl;
        cout << "7. Layang-layang" << endl;
        cout << "8. Trapesium" << endl;

        int pilihan;
        cout << "Pilihan = "; cin >> pilihan;
        float luas;

        switch(pilihan) {
            case 1: { 
                float s;
                cout << "Menghitung Luas Persegi" << endl;
                cout << "Masukkan sisi: "; cin >> s;
                luas = s * s;
                break;
            }
            case 2: { 
                float p, l;
                cout << "Menghitung Luas Persegi Panjang" << endl;
                cout << "Masukkan panjang: "; cin >> p;
                cout << "Masukkan lebar  : "; cin >> l;
                luas = p * l;
                break;
            }
            case 3: { 
                float a, t;
                cout << "Menghitung Luas Segitiga" << endl;
                cout << "Masukkan alas   : "; cin >> a;
                cout << "Masukkan tinggi : "; cin >> t;
                luas = 0.5 * a * t;
                break;
            }
            case 4: {
                float r;
                cout << "Menghitung Luas Lingkaran" << endl;
                cout << "Masukkan jari-jari: "; cin >> r;
                luas = 3.14 * r * r;
                break;
            }
            case 5: { 
                float a, t;
                cout << "Menghitung Luas Jajar Genjang" << endl;
                cout << "Masukkan alas   : "; cin >> a;
                cout << "Masukkan tinggi : "; cin >> t;
                luas = a * t;
                break;
            }
            case 6: { 
                float d1, d2;
                cout << "Menghitung Luas Belah Ketupat" << endl;
                cout << "Masukkan diagonal 1: "; cin >> d1;
                cout << "Masukkan diagonal 2: "; cin >> d2;
                luas = 0.5 * d1 * d2;
                break;
            }
            case 7: { 
                float d1, d2;
                cout << "Menghitung Luas Layang-layang" << endl;
                cout << "Masukkan diagonal 1: "; cin >> d1;
                cout << "Masukkan diagonal 2: "; cin >> d2;
                luas = 0.5 * d1 * d2;
                break;
            }
            case 8: { 
                float a1, a2, t;
                cout << "Menghitung Luas Trapesium" << endl;
                cout << "Masukkan sisi sejajar 1: "; cin >> a1;
                cout << "Masukkan sisi sejajar 2: "; cin >> a2;
                cout << "Masukkan tinggi         : "; cin >> t;
                luas = 0.5 * (a1 + a2) * t;
                break;
            }
            default:
                cout << "Pilihan tidak valid!" << endl;
                return 0;
        }

        cout << "Luas Bangun Datar = " << luas << endl;

    } else if (pilihJenis == 2) {
        cout << "\nMenghitung Volume Bangun Ruang:" << endl;
        cout << "1. Kubus" << endl;
        cout << "2. Balok" << endl;
        cout << "3. Tabung" << endl;
        cout << "4. Bola" << endl;
        cout << "5. Kerucut" << endl;
        cout << "6. Limas Segitiga" << endl;
        cout << "7. Limas Segiempat" << endl;
        cout << "8. Prisma Segitiga" << endl;

        int pilihan;
        cout << "Pilihan = "; cin >> pilihan;
        float volume;

        switch(pilihan) {
            case 1: { 
                float s;
                cout << "Menghitung Volume Kubus" << endl;
                cout << "Masukkan sisi: "; cin >> s;
                volume = s * s * s;
                break;
            }
            case 2: { 
                float p, l, t;
                cout << "Menghitung Volume Balok" << endl;
                cout << "Masukkan panjang: "; cin >> p;
                cout << "Masukkan lebar  : "; cin >> l;
                cout << "Masukkan tinggi : "; cin >> t;
                volume = p * l * t;
                break;
            }
            case 3: { 
                float r, t;
                cout << "Menghitung Volume Tabung" << endl;
                cout << "Masukkan jari-jari: "; cin >> r;
                cout << "Masukkan tinggi   : "; cin >> t;
                volume = 3.14 * r * r * t;
                break;
            }
            case 4: {
                float r;
                cout << "Menghitung Volume Bola" << endl;
                cout << "Masukkan jari-jari: "; cin >> r;
                volume = 4.0/3.0 * 3.14 * r * r * r;
                break;
            }
            case 5: { 
                float r, t;
                cout << "Menghitung Volume Kerucut" << endl;
                cout << "Masukkan jari-jari: "; cin >> r;
                cout << "Masukkan tinggi   : "; cin >> t;
                volume = 1.0/3.0 * 3.14 * r * r * t;
                break;
            }
            case 6: { 
                float a, tSegitiga, tLimas;
                cout << "Menghitung Volume Limas Segitiga" << endl;
                cout << "Masukkan alas segitiga  : "; cin >> a;
                cout << "Masukkan tinggi segitiga: "; cin >> tSegitiga;
                cout << "Masukkan tinggi limas   : "; cin >> tLimas;
                float luasSegitiga = 0.5 * a * tSegitiga;
                volume = 1.0/3.0 * luasSegitiga * tLimas;
                break;
            }
            case 7: { 
                float p, l, t;
                cout << "Menghitung Volume Limas Segiempat" << endl;
                cout << "Masukkan panjang: "; cin >> p;
                cout << "Masukkan lebar  : "; cin >> l;
                cout << "Masukkan tinggi : "; cin >> t;
                volume = 1.0/3.0 * p * l * t;
                break;
            }
            case 8: { 
                float a, tSegitiga, tPrisma;
                cout << "Menghitung Volume Prisma Segitiga" << endl;
                cout << "Masukkan alas segitiga  : "; cin >> a;
                cout << "Masukkan tinggi segitiga: "; cin >> tSegitiga;
                cout << "Masukkan tinggi prisma  : "; cin >> tPrisma;
                float luasSegitiga = 0.5 * a * tSegitiga;
                volume = luasSegitiga * tPrisma;
                break;
            }
            default:
                cout << "Pilihan tidak valid!" << endl;
                return 0;
        }

        cout << "Volume Bangun Ruang = " << volume << endl;

    } else {
        cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
