#include <iostream>
using namespace std;

int main() {
    float jarak;              
    string kendaraan;
    float kmPerLiter;         
    float hargaPerLiter;      
    float kecepatan;          
    int lampuMerah;           
    
	cout << "=== Estimasi Perjalanan, Biaya & Waktu Tempuh ===" << endl;
    cout << "Masukkan jarak tempuh (km): ";
    cin >> jarak;
    cout << "Masukkan efisiensi bahan bakar kendaraan (km per liter): ";
    cin >> kmPerLiter;
    cout << "Masukkan harga bahan bakar per liter (Rp): ";
    cin >> hargaPerLiter;
    cout << "Masukkan kecepatan rata-rata (km/jam): ";
    cin >> kecepatan;
    cout << "Masukkan perkiraan jumlah lampu merah / kemacetan (misal: 5): ";
    cin >> lampuMerah;

    float literButuh = jarak / kmPerLiter ;
    
    float biaya = literButuh * hargaPerLiter;
 
    float waktuJam = jarak / kecepatan + lampuMerah * 0.05 ;  // 60 * 0,05 = 3 (menit) perkiraan lama di lampu merah
    int jam = waktuJam;
    int menit = (waktuJam - jam) * 60;

    cout << "--- Hasil Estimasi ---" << endl;
    cout << "Jarak tempuh     : " << jarak << " km" << endl;
    cout << "Perkiraan bahan  : " << literButuh << " liter" << endl;
    cout << "Biaya BBM        : Rp " << biaya << endl;
    cout << "Estimasi waktu   : " << jam << " jam " << menit << " menit" << endl;

    return 0;
}
