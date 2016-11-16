#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
int n, a;
int b;
int licznik = 0;
cin >> n;
while (licznik < n) {
    b=0;
    cin >> a;
    if (a%2==0){
        cout << "NIE" << endl;
        licznik++;
       }
    else{
        for (int i=3; i<a/2; i++){
        if (a%i==0){
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

