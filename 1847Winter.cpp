#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
        scanf("%d%d%d",&x,&y,&z);

        if(x>y && z>=y)
            cout << ":)" << endl;
        else if (y>x && z<=y)
            cout << ":(" << endl;
        else if (y>x && z>y && z-y < y-x)
            cout << ":(" << endl;
        else if (y>x && z>y && z-y >= y-x)
            cout << ":)" << endl;
        else if (x>y && y>z && z-y > y-x )
            cout << ":)" << endl;
        else if (x>y && y>z && z-y <= y-x)
            cout << ":(" << endl;
        else if (x==y && z>y)
            cout << ":)" << endl;
        else if (x==y && z<y)
            cout << ":(" << endl;
        else
            cout << ":(" << endl;

        return 0;
    }
