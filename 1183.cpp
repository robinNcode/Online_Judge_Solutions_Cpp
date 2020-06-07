#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a=0.0, M[12][12];
    char T;
    int count=0,x,y;
    std::cin>>T;
    for(x=11;x>=0;x--)
    {
        count+=x;
        for(y=0; y<12; y++)
        {
            //scanf("%lf", &M[x][y]);
            //a+=M[x][y];
            cout<<x<<" "<<y<<endl;
        }
    }
    cout<<count<<endl;
    /*if(T=='S')
        printf("%.1lf\n",a);
    else if(T=='M')
    {
        a=a/count;
        printf("%.1lf\n",a);
    }*/
    return 0;
}

