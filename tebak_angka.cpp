#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void easy(int &randomNumber, int &kesempatan, int &range){
    range = 50;
    randomNumber = rand() % range;
    kesempatan = 8;
}

void medium(int &randomNumber, int &kesempatan, int &range){
    range = 70;
    randomNumber = rand() % range;
    kesempatan = 6;
}

void hard(int &randomNumber, int &kesempatan, int &range){
    range = 100;
    randomNumber = rand() % range;
    kesempatan = 5;
}

int main(){
    srand(time(0));
    int randomNumber, kesempatan=1, tebakan, kesulitan, range;
    bool isValid;
    char lagi;

    do{
        cout<<"==== PERMAINAN TEBAK ANGKA ====\n";
        cout<<"------------------------------\n";
        cout<<"Difficulty Level\n";
        cout<<"1. Easy\n";
        cout<<"2. Medium\n";
        cout<<"3. Hard\n";
        cout<<"0. Keluar\n";
        cout<<"Pilih level kesulitan (1-3) : "; cin>>kesulitan;
        cout<<"------------------------------\n";
        
        if(kesulitan == 1){
            easy(randomNumber, kesempatan, range);
            cout<<"======== EASY MODE ========\n";
        } else if(kesulitan == 2){
            medium(randomNumber, kesempatan, range);
            cout<<"======== MEDIUM MODE ========\n";
        } else if(kesulitan == 3){
            hard(randomNumber, kesempatan, range);
            cout<<"======== HARD MODE ========\n";
        } else if(kesulitan == 0){
            cout<<"Keluar..\n";
            break;
        }
        else{
            cout<<"Difficulty tidak tersedia\n";
            isValid = false;
        }
        
        if(isValid){
            while(kesempatan > 0){
                cout<<"------------------------------\n";
                cout<<"Tebak angka dari 0 - "<<range<<endl;
                cout<<"Anda punya "<<kesempatan<<" kesempatan\n";
                cout<<"Tebak angka : "; cin>>tebakan;
                cout<<"------------------------------\n";
                
                if(tebakan == randomNumber){
                    cout<<"Tebakan benar✅\n"; break;
                }
                else if(tebakan > randomNumber)
                    cout<<"Salah❌, Tebakan terlalu tinggi!\n";
                else
                    cout<<"Salah❌, Tebakan terlalu rendah!\n";

                kesempatan--; cout<<endl;
            }
            if(kesempatan == 0)
                cout<<"Kesempatan Habis, Gagal menebak\n";
        }
        cout<<endl;
        cout<<"Coba lagi? (y/n) : "; cin>>lagi;
        if(lagi == 'n')
            break;

        cout<<endl;

    } while(kesulitan != 0 || lagi != 'n');

    cout<<"Terimakasih telah menggunakan program..\n";
}