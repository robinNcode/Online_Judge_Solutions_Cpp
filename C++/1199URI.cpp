#include<bits/stdc++.h>
using namespace std;
string x="FEDCBA";

int main()
{
    string str;
    int num=0;
    while(cin>>str)
    {
        if (str[0] == '-') break;
        else if(str[1]=='x')
        {
            int dec;
            int si=str.length()-2-1;
            long long result=0;

            for (int i=2; i<str.length(); i++)
            {
                if(str[i]>96)
                {
                    str[i] = str[i]-32;
                }
                if (str[i] >64)
                {
                    dec = str[i]-64+9;
                }
                else
                {
                    dec=str[i]-48;
                }
                dec=dec*pow(16,si);
                si--;
                result+=dec;
            }
            cout<<result<<endl;
        }
        else
        {
            int hex;
            string newstr;
            stringstream newint(str);
            newint >> num;
            while (num>0)
            {
                hex=num%16;
                num=num/16;

                if(hex<10)
                {
                    char cha;
                    cha = hex+'0';
                    newstr = newstr+cha;
                }
                else
                {
                    newstr = newstr+x[16-hex-1];
                    //cout<<"New str ="<<newstr;
                }
            }
            cout<<"0x";
            for (int i=newstr.length()-1; i>=0; i--)
            {
                cout<<newstr[i];
            }
            cout<<endl;
        }
    }
    return 0;
}


