#include<iostream>
#include<string.h>
#include <stdlib.h> //substr opr
using namespace std;
/*
JUdul: krsan
author: BAgas Rayhhan
*/

// global scope
string namaMhs;
string nMatkul[7] = {
    //1
    "Fisika",
    //2
    "Algoritma dan Pemograman",
    //3
    "Basis Data",
    //4
    "Web Lanjut",
    //5
    "Rekayasa Perangkat Lunak",
    //6
    "Logika Informatika",
    //7
    "Rangkaian Logika Digital"
    };
string niM;

int sks[7];


int i;
string hari[5] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat"};
// fungsi
void bio(){

cout<<" masukkan nama lengkap : "<<" [spasi => _ ]"<<endl;
cin>>namaMhs;
cout<<"masukkan NIM kamu : "<<endl;
cin>>niM;
}

string namaLengkap(){
// local scope
i = 0;
int n = namaMhs.length();
//program
while(i<n){
    if(namaMhs[i]=='_'){namaMhs[i]=' ';}
    i+=1;
}
return namaMhs;
}

string prodi(){
// local
string prodi;
// program
if(niM.substr(0, 3) == "A11"){prodi = "Teknik Informatika";}
else if(niM.substr(0, 3) == "A12"){prodi = "Desain Komunikasi Visual";}
else if(niM.substr(0, 3) == "A14"){prodi = "Ilmu Komunikasi";}

return prodi;
}

int semester(){
//A11.2022
string tahun = niM.substr(4, 4);
int xx;
i = 0;

// digit 1
if(tahun[0] == '1'){
    xx+=1000;}
else if(tahun[0]=='2'){
    xx+=2000;
}
    //digit 2
        if(tahun[1]=='9'){
                xx+=900;}
                //digit 3
                if(tahun[2]=='1'){
                    xx+=10;
                }
                else if(tahun[2]=='2'){
                    xx+=20;
                }
                    //digit 4
                    if(tahun[3]=='1'){
                    xx+=1;
                    }
                    else if(tahun[3]=='2'){
                    xx+=2;
                    }
                    else if(tahun[3]=='3'){
                    xx+=3;
                    }
                    else if(tahun[3]=='4'){
                    xx+=4;
                    }
                    else if(tahun[3]=='5')
                    {xx+=5;
                    }


                    else if(tahun[3]=='6'){
                    xx+=6;
                    }
                    else if(tahun[3]=='7'){
                    xx+=7;
                    }
                    else if(tahun[3]=='8'){
                    xx+=8;
                    }
                    else if(tahun[3]=='9'){
                    xx+=9;
                    }


 return 2023+1-xx;
}

void SKS(){
i = 0;
while(i<7){

    if((nMatkul[i] == "Fisika")||(nMatkul[i] == "Algoritma dan Pemograman")){
        sks[i]  = 4;
    }
    else if(nMatkul[i] == "Web Lanjut"){
        sks[i] = 2;
    }
    else{
        sks[i] = 3;
    }
    i++;
}
}

void jadwal(){
i = 0;
int j = 0;
int k = 0;

while(i<7){
    while(j<4){
        k = 0;
        while(k<2){
            cout<<j+1<<". "<<hari[j]<<" "<<nMatkul[i]<<" "<<sks[i]<<" sks"<<endl;
            if((k <= 1)&&(j == 3)){break;}
            k++;
            i++;
        }
        cout<<endl;
        j++;
    }
}

i = 0;
j = 3;
while(i<7){

    //if(j == 5){break;}
    if(sks[i] == 4){
        cout<<j+1<<". "<<hari[j]<<": "<<nMatkul[i]<<" "<<sks[i]<<" sks"<<endl;
        j++;
    }

    i++;
}
}

int main(){
// biodata

bio();
system("cls");

cout<<"Nama Lengkap: "<<namaLengkap()<<endl;
cout<<"NIM: "<<niM<<endl;
cout<<"Jurusan: "<<prodi()<<endl;
cout<<"Semester"<<semester()<<endl;
cout<<endl<<"==============================================="<<endl;
cout<<endl;
// jadwal dan matkul
SKS();
jadwal();
return 0;
}

