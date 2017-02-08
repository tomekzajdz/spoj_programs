#include <iostream>

using namespace std;

int main(){
int l, c, h, w, t;
int k=0;
cin >> t;
while (k<t){
cin >> l >> c >> h >> w;
int nl = (l*h)+(l+1);
int cl = (c*w)+(c+1);
    for(int i=0; i<nl; i++){
        for(int j=0; j<cl; j++){
            if((i==0)||(i%(h+1)==0)||(j==0)||(j%(w+1)==0))
                cout << "*";
            else
                cout << ".";
        }
        cout<< endl;
    }
k++;
}
//system "PAUSE";
return 0;
}
