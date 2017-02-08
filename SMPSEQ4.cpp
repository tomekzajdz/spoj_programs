#include <iostream>

using namespace std;
const int N=201;


int main(){
    int seq1[N];
    int seq2[N];
    int res[N];
    int n, m;
    int k=0;

    cin >> n; // dlugosc tablicy nr1
    for (int i=0; i<n; i++){ //dodanie 1 ciagu
        cin >> seq1[i];
    }

    cin >> m; // dlugosc tablicy nr2
    for (int i=0; i<m; i++){ // dodanie 2 ciagu danych
        cin >> seq2[i];
    }
    for (int i=0; i<n; i++){
        //int p=0;
        for(int j=0; j<m; j++){
            if(seq1[i]==seq2[j]){
                res[k]=seq1[i];
                k++;
            }
        }
    }

    for (int i=0; i<k; i++){ // dodanie 2 ciagu danych
        cout << res[i]<<" ";
    }

//system "PAUSE";
return 0;
}
