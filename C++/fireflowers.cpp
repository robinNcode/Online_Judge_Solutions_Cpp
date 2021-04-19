#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int r1, x1, y1, r2, x2, y2;
    float instance;

    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        instance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
        if((r1 - instance) >= r2)
            cout << "RICO\n";
        else
            cout << "MORTO\n";
    }
    return 0;
}
