/*
Judul: nilai terbesar
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

// kamus

int i = 0;
int x;
int N[6];

void input(){
while(i<6){
    cout<<"masukkan angka ke: "<<i+1<<" : ";cin>>N[i];
    system("cls");
    i+=1;
}
}

int gede(int a, int b){
if(a>b){
    x = a;
    return a;
}
else{
    x = b;
    return b;
}
}

int kecil(int x, int y){
if(x<y){
    return x;
}
else{
    return y;
}
}

int main(){
input();
/*
cout<<"Nilai terkecil: "<<kecil(N[1], kecil(N[0], kecil(kecil(N[2], N[3]), kecil(N[4], N[5]))));

i = 0;
while(i<6){
    gede(N[i], N[i+1]);
    i++;
}
cout<<x;
*/
cout<<"Nilai terbesar: "<<gede(N[1], gede(N[0], gede(gede(N[2], N[3]), gede(N[4], N[5]))))<<endl;

return 0;
}
