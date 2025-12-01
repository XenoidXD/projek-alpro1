#include <iostream>
using namespace std;

void Konversi(int bilangan, int *jam, int *menit, int *detik) {
    *jam = bilangan / 3600;
    int sisa = bilangan % 3600;
    *menit = sisa / 60;
    *detik = sisa % 60;
}

int main() {
    int bilangan;
    int jam, menit, detik;

    cout << "bilangan (detik) = ";
    cin >> bilangan;

    Konversi(bilangan, &jam, &menit, &detik);

    cout << "Hasil konversi:" << endl;
    cout << jam << " jam " << menit << " menit " << detik << " detik" << endl;

    return 0;
}
