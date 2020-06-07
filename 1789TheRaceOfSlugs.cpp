#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num;
    while(cin>>test){
        int lol1=0,lol2=0,lol3=0;
        while(test--){
            cin>>num;
            if(num>=20) lol1++;
            else if(num>9 && num<20) lol2++;
            else lol3++;
        }
        if (lol1 > 0) cout<<3<<endl;
        else if(lol1 == 0 && lol2 > 0) cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}

