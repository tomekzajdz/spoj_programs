#include <iostream>

using namespace std;


int main(){
int t, m, n, row, col;
int k=0;
cin >> t;

while(k<t){
    cin >> m >> n >> row >> col;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if((j==col-row+i)||(j==col+row-i-2))
                cout << "*";
            else
                cout << ".";
        }
        cout<< endl;
    }
    cout << endl;
    k++;
}

return 0;
}
