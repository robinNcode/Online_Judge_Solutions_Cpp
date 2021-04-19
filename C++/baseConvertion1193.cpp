#include<bits/stdc++.h>
using namespace std;
string x="FEDCBA";

void bin_dec(string str){
            //decimal part//
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
            cout<<result<<" dec"<<endl;
}

void hex_bin(string str){
    string  news = str;
    //hexa-decimal Part
            int hex,num=0;
            string newstr;
            stringstream newint(str);
            newint >> num;  //string to number
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
                }
            }

            for (int i=newstr.length()-1; i>=0; i--)
            {
                cout<<newstr[i];
            }
            cout<<" hex\n";
            //binary part
            int num1;
            stringstream newint1(news);
            newint1>>num1;

            int counter=0;
            long long bin[counter];

            while(num1 >= 0){
                bin[counter]=num1%2;
                num1= num1/2;
            if (num1==0) break;
                counter++;
           }
           for  (int i=counter; i>=0; i--){
            cout<<bin[i];
           }
           cout<<" bin\n";

}
int main()
{
    string str,base;
    int test,count=1;

    cin>>test;
    while(test--)
    {
        cin>>str>>base;

        if (base == "dec") {
            cout<<"Case "<<count<<":\n";
            hex_bin(str);
        }
        else if(base == "hex")
        {
            cout<<"Case "<<count<<":\n";
            bin_dec(str);
        }
        else if (base == "bin")
        {
            cout<<"Case "<<count<<":\n";
            cout<<endl;
        }
        count++;
    }
    return 0;
}
