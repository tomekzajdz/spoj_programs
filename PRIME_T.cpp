#include <iostream>

using namespace std;
const int ROZM = 100000;

int main(){

int n, b;
int liczby[ROZM];
int counter = 0;
int  = 0;
cin >> n;
while (num < n) {
cin >> liczby[num];
num++;
}
while (counter < n) {
    b=0;
    //cin >> a;
    if (liczby[counter]!=2&&liczby[counter]%2==0||liczby[counter]==1){
        cout << "NIE" << endl;
        counter++;
       }
    else{
        for (int i=3; i*i<=liczby[counter]; i++){
        if (liczby[counter]%i==0){
            cout << "NIE" << endl;
            b++;
            counter++;
            break;
            }
        }
        if (b==0){
        cout << "TAK" << endl;
        counter++;
        }
    }
}
}

