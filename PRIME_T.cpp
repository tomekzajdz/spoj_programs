#include <iostream>

using namespace std;
const int ROZM = 100000;

int main(){

int n, b;
int liczby[ROZM];
int licznik = 0;
int licznik2 = 0;
cin >> n;
while (licznik2 < n) {
cin >> liczby[licznik2];
licznik2++;
}
while (licznik < n) {
    b=0;
    //cin >> a;
    if (liczby[licznik]!=2&&liczby[licznik]%2==0||liczby[licznik]==1){
        cout << "NIE" << endl;
        licznik++;
       }
    else{
        for (int i=3; i*i<=liczby[licznik]; i++){
        if (liczby[licznik]%i==0){
            cout << "NIE" << endl;
            b++;
            licznik++;
            break;
            }
        }
        if (b==0){
        cout << "TAK" << endl;
        licznik++;
        }
    }
}
}

