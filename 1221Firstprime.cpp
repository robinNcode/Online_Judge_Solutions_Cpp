#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long pri,pass;
    int test;

    cin>>test;
    while(test--)
    {
        cin>>pri;

        if (pri<10)
        {
            if (pass%pass != 0 && pass%1 != 0 )
            {
                cout<<"Not Prime\n";
                break;
            }
            else if (pri ==0 && pri == 1)
                cout<<"Not Prime\n";
            else
                cout<<"Prime\n";
        }
        else
        {
            while(pri != 0)
            {
                pass = pri%10;
                pri = pri/10;

                if (pass%pass != 0 && pass%1 != 0 )
                {
                    cout<<"Not Prime\n";
                    break;
                }                else if (pri ==0 && pri == 1)
                    cout<<"Not Prime\n";
                else
                    cout<<"Prime\n";
        }
    }
    }
    return 0;
}
