#include <iostream>
#include <cmath>

using namespace std;

int main(){
int t, x1, y1, r1, x2, y2, r2;
cin >> t;
int k=0;
while (k<t){
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    int deltax = sqrt(pow((x1-x2),2));
    int deltay = sqrt(pow((y1-y2),2));
    int deltar = (r1-r2);
    double dist = sqrt(pow(deltay,2)+pow(deltax,2));

        if ((x1==x2)&&(y1==y2)&&(r1==r2))
            cout << "I";
        else if (((dist+r1==r2)&&(r1<r2))||((dist+r2==r1)&&(r2<r1)))
            cout << "E";
        else if ((r1!=r2)&&((dist+r1<r2)^(dist+r2<r1)))
            cout << "I";
        else
            cout << "O";
        cout << endl;
k++;
}

return 0;
}
