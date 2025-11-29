#include <iostream>
using namespace std;

void Konversi(int bilangan, int *km, int *m, int *cm, int *mm) {
    *km = bilangan / 1000000;
    int sisa = bilangan % 1000000;

    *m = sisa / 1000;
    sisa = sisa % 1000;

    *cm = sisa / 10;
    *mm = sisa % 10;
}

int main() {
    int bilangan;
    int km, m, cm, mm;

    cout << "bilangan (mm) = ";
    cin >> bilangan;

    Konversi(bilangan, &km, &m, &cm, &mm);

    cout << "Hasil konversi:" << endl;
    cout << "Kilometer : " << km << " km" << endl;
    cout << "Meter     : " << m << " m" << endl;
    cout << "Centimeter: " << cm << " cm" << endl;
    cout << "Milimeter : " << mm << " mm" << endl;

    return 0;
}
