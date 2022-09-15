//judul= menjumlahkan nilai x dan y
//nama= Bagas Rayhan Sebastia
//NIM= A11.2022.14715


//kamus
#include<iostream>
using namespace std;
main(){
    int x;
    float y;
    float hasil;

//deskripsi
cout<<"masukkan nilai x,harus bilangan bulat"<<endl;
cin>>x;
cout<<"masukkan nilai y, boleh desimal"<<endl;
cin>>y;
cout<<"hasil penjumlahan x dan y adalah"<<endl;
hasil = x + y;
cout<<hasil;
cout<<"kesimpulan="<<endl;

if(hasil < 5){cout<<"belum cukup"<<endl;}
    else if((hasil >= 5)&&(hasil < 10)){cout<<"cukup"<<endl;}
    else if(hasil >= 10){cout<<"terlalu banyak"<<endl;}






}
