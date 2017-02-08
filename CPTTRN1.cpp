#include <iostream>

using namespace std;

int main(){
int n,m,t;
int k=0;
cin >> t;

while (k<t){
cin >> n;
cin >> m;
for (int i=0; i<n; i++){
        cout<< endl;
    for(int j=0; j<m; j++){
        if((i==0)||(i%2==0)){
           if((j==0)||(j%2==0))
                cout<<"*";
            else cout << ".";
           }
        else if ((i==1)||(i%2!=0)){
           if((j==0)||(j%2==0))
                cout<<".";
            else cout << "*";
        }
    }
}
cout << endl;
k++;
}
return 0;
}
