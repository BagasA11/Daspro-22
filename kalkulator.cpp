/*judul
Program: kalkulator sederhana
author: bagas Rayhan Sebastian
NIM: A11.2022.14715
*/
#include<iostream>
using namespace std;
//kamus

int bil1, bil2;
float hasil;
char ops;

void nginput(){
cout<<" masukkan angka ke-1 : ";
cin>>bil1;
cout<<" masukkan operator : ";
cin>>ops;
cout<<" masukkan angka ke-2 : ";
cin>>bil2;

}

float ngitung(int a, int b, char oper){
    // jumlah
    if(oper == '+'){
        hasil = a + b;
    }
    else if(oper == '-'){
        hasil = a - b;
    }
    else if((oper == '*')||(oper == 'x')){
        hasil = a * b;
    }
    else if((oper == '/')||(oper == ':')){
        hasil = a / b;
    }
    else{
        return 0;
    }
    return hasil;
}

void tampil(){
    if(ops == '+'){
        cout<<bil1<<" "<<ops<<" "<<bil2<<" = "<<hasil;
    }
    else if(ops == '-'){
        cout<<bil1<<" "<<ops<<" "<<bil2<<" = "<<hasil;
    }
    else if((ops == '*')||(ops == 'x')){
        cout<<bil1<<" "<<ops<<" "<<bil2<<" = "<<hasil;
    }
    else if((ops == '/')||(ops == ':')){
        cout<<bil1<<" "<<ops<<" "<<bil2<<" = "<<hasil;
    }

}
//deskripsi
int main(){
nginput();
ngitung(bil1, bil2, ops);
tampil();
}
