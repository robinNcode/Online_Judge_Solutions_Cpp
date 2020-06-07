#include<bits/stdc++.h>
using namespace std;
int main()
{
    int length,intstr,ascii;
    string str;
    while(getline(cin,str))
    {
        length =str.length();
        //cout<<length<<endl;
        for(int i=0; i<length; i++)
        {
            intstr = (int) str[i];
            if(intstr > 96 && intstr<123)
            {
                ascii=intstr+13;
                if(ascii>122)
                {
                    ascii=ascii-26;
                    str[i] = ascii;
                    cout<<str[i];
                }
                else
                {
                    str[i] = intstr + 13;
                    cout<<str[i];
                }
            }
            else if(intstr > 64 && intstr<91 )
            {
                ascii=intstr+13;
                if(ascii>90)
                {
                    ascii=ascii-26;
                    str[i] = ascii;
                    cout<<str[i];
                }
                else
                {
                    str[i] = intstr + 13;
                    cout<<str[i];
                }
            }
            else
                cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}
