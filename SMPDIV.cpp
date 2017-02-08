#include <iostream>

using namespace std;

int main(){
    int t, n, x, y;
    int k=0;
    cin >> t;
    while(k<t){
        cin >> n;
        cin >> x;
        cin >> y;
        for (int i=x; i<n; i++){
            if((i%x==0)&&(i%y!=0))
                cout << i <<" ";
        }
        cout << endl;
        k++;
    }
    return 0;
}
