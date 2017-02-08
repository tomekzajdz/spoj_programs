#include <iostream>

using namespace std;

int main(){
int t, l, c;
int k=0;
cin >> t;
while(k<t){
    cin >> l;
    cin >> c;
    for (int i=0; i<l;i++){
        for(int j=0; j<c; j++){
            if((i==0)||(i==l-1))
                cout << "*";
            else if((j==0)||(j==c-1))
                cout << "*";
            else
                cout << ".";
        }
        cout << endl;
    }
    k++;
}
return 0;
}
