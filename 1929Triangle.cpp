#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c,d;
    int large1,large2;
    cin>>a>>b>>c>>d;
    if (a>d && a>c && a>b) large1=a;
    else if (b>d && b>c && b>a) large1=b;
    else if (c>d && c>a && c>b) large1=c;
    else if (d>a && d>c && d>b) large1=a;

    if(large1==a){

    }

   /* c=max(c,d);
    b=max(b,c);
    a=max(a,b);*/



	return 0;
}

