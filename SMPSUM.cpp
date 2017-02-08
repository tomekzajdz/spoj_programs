#include <iostream>
//#include <cmath>

using namespace std;

int main(){
int a, b;
cin >> a >> b;

int k=0;
    for (int i=a; i<=b; i++){
        int n = i*i;
        k=k+n;
    }
cout << k;
return 0;
}
