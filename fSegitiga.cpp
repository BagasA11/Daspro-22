#include<iostream>
using namespace std;
/*
judul: program segitiga
author: BagasRayhanSebastian
*/

// Kamus
//global

int alas;
int tinggi;
int miring;

//input
void sisiCin(){
//kamus
//program
cout<<"masukkan alas segitiga: ";cin>>alas;
cout<<"masukkan tinggi segitiga: ";cin>>tinggi;
cout<<"masukkan sisi miring segitiga: ";cin>>miring;

}

//luas segitiga
int luas(int a, int b){
//kamus

//program

return (a*b)/2;
}

string angTyp(int a, int b, int c){
    //kamus lokal
        string jns;
    //program
    if(c*c == a*a + b*b){jns = "siku-siku";}

    else if(c*c > a*a + b*b){jns = "tumpul";}
    else if(c*c < a*a + b*b){jns = "tumpul";}
    return jns;
}

// sisi
string sisi(){
if(angTyp(alas, tinggi, miring)=="tumoul"){
    return "sembarang";
}
else{
    if((alas == tinggi)&&(alas == tinggi)){
        return "sama sisi";
    }
    else if((alas == tinggi)^(alas == miring)^(tinggi == miring)){
        return "sama kaki";
    }
    else{
        return "sembarang";
    }
}
}
// tampil esttetik
void out(){
cout<<"Luas segitiga "<<angTyp(alas, tinggi, miring)<<" "<<sisi()<<" adalah "<<luas(alas, tinggi)<<" meter2";
}
//program utama

int main(){
    sisiCin();
    out();
}
