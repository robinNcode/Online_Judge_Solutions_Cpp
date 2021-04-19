#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int n,m;
    long long u;
    int l,r,v,p,count=0;

    scanf("%d %d %lld",&n,&m,&u);
    long long  arr[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&arr[i]);
        if(arr[i]>u && arr[i]<1) break;
    }
    long long result=0;
    while (m--)
    {
        scanf("%d %d %d %d",&l,&r,&v,&p);
        for(int i=l; i<=r; i++)
        {
            if (arr[i]<v) count++;
        }
        for(int i=1; i<=n; i++)
        {
            if(i==p)
            {
                result = (u*count)/(r-l+1);
                printf("%lld\n",result);
            }
        else printf("%lld\n",arr[i]);
        }
    }

    return 0;
}

