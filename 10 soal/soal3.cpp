
#include <iostream>
using namespace std;

void isiArray(int *A, int *n) {
    int data[] = {2, 5, 1, 2, 4, 6, 3, 2, 7, 1};
    *n = 10;
    for (int i = 0; i < *n; i++) {
        A[i] = data[i];
    }
}

void hitung(int *A, int n, int *jumlah, float *rata) {
    *jumlah = 0;
    int kar = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] < 5 || A[i] >= 7) {
            *jumlah += A[i];
            kar++;
        }
    }

    if (n > 0)
        *rata = (float)(*jumlah) / kar;
    else
        *rata = 0;
}

int main() {
    int A[10];
    int n;
    int jumlah;
    float rata;

    isiArray(A, &n);
    hitung(A, n, &jumlah, &rata);

    cout << "Jumlah nilai (<5 atau >=7): " << jumlah << endl;
    cout << "Rata-rata nilai (<5 atau >=7): " << rata << endl;

    return 0;
}
