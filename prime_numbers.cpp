#include <iostream>

using namespace std;
const int D=20;

int MAX (int tab1[], int d){
    int tmp = tab1[0];
    for(int i=1;i<2*d;i++){
        if ( tab1[i] > tmp)
            tmp = tab1[i];
    }
           // cout << tmp << endl;
            return tmp;

}
int MIN (int tab1[], int d){
    int tmp2 = tab1[0];
    for (int i=1; i<2*d; i++){
        if ( tab1[i] < tmp2)
            tmp2 = tab1[i];
    }
          //  cout << tmp2<< endl;
            return tmp2;
}
int main(){

int tab[D];
int t;
cin>> t; // podaj liczbe ciagow
   for (int i=0; i<2*t; i+=2){
        cin >> tab[i];
        cin >> tab[i+1];
    }

int maximal = MAX( tab, t);
int minimal = MIN( tab, t);

cout << minimal<<endl;
cout << maximal;

return 0;

}
