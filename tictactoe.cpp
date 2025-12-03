#include <iostream>
using namespace std;

void resetBoard(char board[]) {
    for (int i = 0; i < 9; i++) {
        board[i] = '1' + i;
    }
}

void printBoard(char board[]) {
    cout << "\n";
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << "\n";
    cout << "---+---+---\n";
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << "\n";
    cout << "---+---+---\n";
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << "\n";
    cout << "\n";
}

char cekMenang(char board[]) {
    int garis[8][3] = {
        {0,1,2},
        {3,4,5},
        {6,7,8},
        {0,3,6},
        {1,4,7},
        {2,5,8},
        {0,4,8},
        {2,4,6}
    };
    for (int i = 0; i < 8; i++) {
        int a = garis[i][0];
        int b = garis[i][1];
        int c = garis[i][2];
        if (board[a] == board[b] && board[b] == board[c]) {
            return board[a];
        }
    }
    bool penuh = true;
    for (int i = 0; i < 9; i++) {
        if (board[i] >= '1' && board[i] <= '9') {
            penuh = false;
            break;
        }
    }
    if (penuh) return 'D';
    return ' ';
}

int main() {
    char board[9];
    char giliran = 'X';
    char hasil;
    char lagi;

    do {
        resetBoard(board);
        giliran = 'X';
        hasil = ' ';

        cout << "=== GAME TIC TAC TOE ===\n";
        cout << "Pemain 1: X\n";
        cout << "Pemain 2: O\n";

        while (true) {
            printBoard(board);
            cout << "Giliran pemain " << giliran << ", pilih posisi (1-9): ";
            int pos;
            cin >> pos;

            if (cin.fail() || pos < 1 || pos > 9) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Input tidak valid.\n";
                continue;
            }

            int idx = pos - 1;
            if (board[idx] == 'X' || board[idx] == 'O') {
                cout << "Posisi sudah terisi, pilih yang lain.\n";
                continue;
            }

            board[idx] = giliran;

            hasil = cekMenang(board);
            if (hasil == 'X' || hasil == 'O' || hasil == 'D') {
                printBoard(board);
                if (hasil == 'D') {
                    cout << "Hasil: Seri!\n";
                } else {
                    cout << "Pemain " << hasil << " menang!\n";
                }
                break;
            }

            if (giliran == 'X') giliran = 'O';
            else giliran = 'X';
        }

        cout << "Main lagi? (y/t): ";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');

    return 0;
}
