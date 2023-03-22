#include<iostream>
#include<stdlib.h>
using namespace std;
/*
judul: durasi 1
author: BAgas Rayhan S
A11.202214715

*/
//kamus
int jAkhir, mAkhir, dAkhir;
int jAwal, mAwal, dAwal;
int durasi;

void input(){
cout<<" masukkan waktu mula2"<<endl;
cout<<" Jam: ";cin>>jAwal;
cout<<" menit: ";cin>>mAwal;
cout<<" detik: ";cin>>dAwal;
//--------
cout<<" masukkan waktu saat ini"<<endl;
cout<<" Jam: ";cin>>jAkhir;
cout<<" menit: ";cin>>mAkhir;
cout<<" detik: ";cin>>dAkhir;

}

bool val(int Jo, int Jt, int Mo, int Mt, int Do, int Dt){

    if(((Jo>= 0)&&(Jo<24))&&((Jt>= 0)&&(Jt<24))){
        if(((Mo>= 0)&&(Mo<24))&&((Mt>= 0)&&(Mt<24))){
            if(((Do>= 0)&&(Do<24))&&((Dt>= 0)&&(Dt<24))){
                return true;
            }

        }


    }
    else{
        return false;
    }
}
//ampmawal

string AMPMo(int Jo){
//11.59
//23.59
// 0 - 11 -> 12 - 23
if((Jo>= 0)&&(Jo < 12)){
        return "AM";
}
else {
    return "PM";
}
}

//ampmakhir

string AMPMt(int Jt){
//11.59
//23.59
// 0 - 11 -> 12 - 23
if((Jt>= 0)&&(Jt < 12)){
        return "AM";
}
else {
    return "PM";
}
}

int jam(int Ho, int Ht){
int jj;
jj = (Ht*3600)-(Ho*3600);
return jj;
}

int menit(int Mo, int Mt){
int MM;
MM = (Mt*60)-(Mo*60);
return MM;
}

int Detik(int Do, int Dt){
int D;
D = Dt - Do;
return D;
}

int dura(){

if(val(jAwal, jAkhir, mAwal, mAkhir, dAwal, dAkhir)){
    return Detik(dAwal, dAkhir) + menit(mAwal, mAkhir) + jam(jAwal, jAkhir);
}
else{
    cout<<"inputan tidak valid"<<endl;
}
}

// tadi
void tadi(){
cout<<"tadi adalah jam : "<<jAwal<<":"<<mAwal<<AMPMo(jAwal)<<endl;
}
void sekarang(){
cout<<"sekarang adalah jam : "<<jAkhir<<":"<<mAkhir<<AMPMt(jAkhir)<<endl;
}
int main(){
input();
//clear screen
system("cls");
cout<<" =========== "<<endl;
tadi();
cout<<endl;
sekarang();
cout<<" ================ "<<endl;
cout<<"rentang waktu : "<<dura()<<" detik";

}
