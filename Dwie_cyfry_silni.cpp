#include <iostream>

using namespace std;


long long silnia (int wyr){
    if (wyr==0) return 1;
    else
    return silnia(wyr-1) * wyr;
    }

const int D=30;

int main(){
int d, wyraz;
long long sil;
long liczba[D];
cin >> d;
for ( int i=0; i<d; i++){
    cin >> liczba[i];
}

for ( int j=0; j<d; j++){
    wyraz = liczba[j];
    sil = silnia(wyraz);
    int ltd = sil%100;
    cout << ltd/10 << " " << ltd%10<<endl;
}

    return 0;
}


