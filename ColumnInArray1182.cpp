
#include <stdio.h>
#include<bits/stdc++.h>

int main()
{
    double a=0.0, M[12][12];
    char T;
    int C,x,y;
    scanf("%d", &C);
    std::cin>>T;
    for(x=0;x<12;x++)
    {
        for(y=0; y<12; y++)
        {
        scanf("%lf", &M[x][y]);
        if(y==C)
            a+=M[x][y];
        }
    }
    if(T=='S')
        printf("%.1lf\n",a);
    else if(T=='M')
    {
        a=a/12.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
