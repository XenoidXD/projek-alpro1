#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string cekKemenangan(string playerOpsi, string botOpsi){
    if(playerOpsi == botOpsi){
        return "Seri!";
    } else if(
        (playerOpsi == "gunting" && botOpsi == "kertas") ||
        (playerOpsi == "kertas" && botOpsi == "batu") ||
        (playerOpsi == "batu" && botOpsi == "gunting")
    ){
        return "Kamu Menang✅";
    } else{
        return "Kamu Kalah👎";
    }


}

int main(){
    srand(time(0));
    string opsi[3] = {"batu", "gunting", "kertas"};
    string playerOpsi, botOpsi, hasil;
    bool isValid;
    int randomIndex;
    
    while(playerOpsi != "n"){
        isValid = false;
        randomIndex = rand() % 3;
        botOpsi = opsi[randomIndex];
        cout<<"=== GAME BATU GUNTING KERTAS ===\n";
        cout<<"List : {\"batu\", \"gunting\", \"kertas\"}, {'n' untuk keluar}\n";
        cout<<"Kamu : "; cin>>playerOpsi;
        
        for(int i=0;i<3;i++){
            if(playerOpsi == opsi[i] || playerOpsi == "n"){
                isValid = true;
                break;
            }
        }
        
        if(isValid){
            if(playerOpsi == "n"){
                cout<<"Program Selesai..\n";
                return 0;
            } else{
                cout<<"Computer : "<<botOpsi<<endl;
                hasil = cekKemenangan(playerOpsi, botOpsi);
                cout<<hasil<<endl;
            }
        } else{
            cout<<"Input tidak valid\n";
        }
        cout<<endl;
    }


    return 0;
}