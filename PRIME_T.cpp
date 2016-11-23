#include <iostream>

using namespace std;
const int SIZE = 100000;

int main(){

int n, b;
int numbers[SIZE];
int counter = 0;
int testnr = 0;
cin >> n;
while (testnr < n) {
cin >> numbers[testnr];
testnr++;
}
while (counter < n) {
    b=0;
    //cin >> a;
    if (numbers[counter]!=2&&numbers[counter]%2==0||numbers[counter]==1){
        cout << "NIE" << endl;
        counter++;
       }
    else{
        for (int i=3; i*i<=numbers[counter]; i++){
        if (numbers[counter]%i==0){
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

