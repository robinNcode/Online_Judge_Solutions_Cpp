#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    long long num1,num2;
    cin>>test;
    while (test--)
    {
        cin>>num1>>num2;
        if(num1 >= num2)
        {
            while(num2 != 0)
            {
                if(num2%10 != num1%10)
                {
                    cout<<"nao encaixa\n";
                    goto lol;
                }
                num1/=10;
                num2/=10;
            }
            cout<<"encaixa\n";
        }
        else
        {
            cout<<"nao encaixa\n";
        }
        lol:;
    }
    return 0;
}

