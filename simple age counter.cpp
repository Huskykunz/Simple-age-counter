//Simple age counter
#include <iostream>
#include <ctime>
using namespace std;

int mintaTahunLahir(){
    int tahunLahir;
    cout<<"Masukkan tahun lahirmu : ";
    cin>>tahunLahir;

    time_t t = time(0);
    tm* sekarang = localtime(&t);
    int tahunSekarang = sekarang->tm_year + 1900;

    if (tahunLahir>tahunSekarang){
        cout<<"Lu yang bener aja dah, masa lahir di masa depan, input lagi ga!"<<endl;
        return mintaTahunLahir();
    }else if (tahunLahir<=1900){ 
        cout<<"Hah?, Lu lahir di tahun :"<<tahunLahir<<"?, yang bener aja."<<endl;
        return mintaTahunLahir();
    }else{
        cout<<"Okeh, tahun lahir valid"<<endl;
        int umurSekarang = tahunSekarang - tahunLahir;
        return umurSekarang;
}
}

int main(){
    cout<<"-----------------------------==[Program Menghitung Umur]==-----------------------------"<<endl;
    int umur = mintaTahunLahir();
    cout<<"Sekarang umur kamu adalah : "<<umur<<" Tahun"<<endl;
    cout<<"------------------------------==[Program Telah Selesai]==------------------------------"<<endl;
return 0;
}