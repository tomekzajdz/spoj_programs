#include <iostream>
#include <stdio.h>

using namespace std;


long silnia (int wyr){
    if (wyr==0) return 1;
    else
    return silnia(wyr-1) * wyr;
    }

const int D=30;

int main(){
int d, wyraz;
long sil;
long liczba[D];
cin >> d;
if(d<=D){
for ( int i=0; i<d; i++){
    cin >> liczba[i];
}

for ( int j=0; j<d; j++){
    if (liczba[j]<10){
    wyraz = liczba[j];
    sil = silnia(wyraz);
    int ltd = sil%100;
    int ltd1 = ltd/10;
    int ltd2 = ltd%10;
    cout << ltd1 << " " << ltd2<<endl;
    }
    else
    cout << 0 << " " << 0 << endl;
}
}

    return 0;
}


