#include <iostream>
using namespace std;

int main() {
   int pemakaian;   
   int biaya = 0;
   int biayaTetap;
    
    cout << "=== SIMULASI TAGIHAN PDAM ===" << endl;
    cout << "Masukkan pemakaian air bulan ini (m3): ";
    cin >> pemakaian;

    cout << "Masukkan biaya tetap / administrasi (misal 15000): Rp ";
    cin >> biayaTetap;

    // 0–10 m3: Rp 3000 / m3
    // 11–20 m3: Rp 4500 / m3
    // >20 m3: Rp 6000 / m3

    if (pemakaian <= 10) {
        biaya = pemakaian * 3000;
    } else if (pemakaian <= 20) {
        biaya = 10 * 3000 + (pemakaian - 10) * 4500;
    } else {
        biaya = 10 * 3000 + 10 * 4500 + (pemakaian - 20) * 6000;
    }

    double total = biaya + biayaTetap;

    cout << "--- RINCIAN TAGIHAN ---" << endl;
    cout << "Pemakaian air    : " << pemakaian << " m3" << endl;
    cout << "Biaya pemakaian  : Rp " << biaya << endl;
    cout << "Biaya tetap      : Rp " << biayaTetap << endl;
    cout << "Total tagihan    : Rp " << total << endl;

    return 0;
}
