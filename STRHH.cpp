#include <iostream>

using namespace std;

int main(){
int n, l1;
int k=0;
string str1;
l1=str1.length();
cin >> n;
while (k<n){
    cin>>str1;
    l1=str1.length();
    for (int i=0; i<l1/2; i++){
        if((i==0)||(i%2==0))
            cout << str1[i];
    }
    cout << endl;
}
return 0;
}
