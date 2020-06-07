#include<bits/stdc++.h>
using namespace std;
int main()
{

    int square,test;

    cin>>test;
    while(test--)
    {
        cin>>square;
        cout<<(long long) (pow(2,square)/12000)<<" kg\n";
    }
    return 0;
}
