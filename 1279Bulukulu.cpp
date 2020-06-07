#include<bits/stdc++.h>
using namespace std;
int main()
{

    int year, leap=0,lol=0;
    while(1)
    {
        cin>>year;

        if (year % 4 == 0)
        {
            leap++;
            if (year % 100 == 0)
            {
                leap++;
                if (year % 400 == 0)
                {
                    leap++;
                    //cout << year << " is a leap year.";
                }
                else lol++;
                    // cout << year << " is not a leap year.";
                }
            else lol++;
                // cout << year << " is a leap year.";
            }
        else lol++;
            // cout << year << " is not a leap year.";

        if(leap==0 && year%15 ==0 ) cout<<"This is huluculu festival year.\n";
        else if (leap>0 && year % 15==0) cout<<"This is leap year.\n"<<"This is huluculu festival year.\n";
        else if (leap>0 && year % 55) cout<<"This is leap year.\n"<<"This is bulukulu festival year.\n";
        else if(leap>0 && year%15 != 0 || year%55 != 0 ) cout<<"This is leap year.\n";
        else cout<<"This is an ordinary year.\n";

        cout<<endl;
        }
    return 0;
}
