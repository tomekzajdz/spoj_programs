#include <iostream>

using namespace std;



int main(){
    int l, c; //l-number of lines, c-number of columns
    int t;
    cin>>t;
    int k=0;
while (k<t){
    cin >> l;
    cin >> c;
    int nl = (l*4)-(l-1);
    int cl = (c*4)-(c-1);
    for(int i=0; i<nl; i++){
        for(int j=0; j<cl; j++){
            if((i==0)||(i%3==0)||(j==0)||(j%3==0))
                cout << "*";
            else
                cout << ".";
        }
        cout<< endl;
    }
}
//system "PAUSE";
return 0;
}
