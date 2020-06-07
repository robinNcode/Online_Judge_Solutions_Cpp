#include<bits/stdc++.h>
using namespace std;
int BinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
    string screm;
    int  result=0;
    while(getline(cin,screm))
    {
        string blink;
        for(int i=0; i<3; i++)
        {
            if(screm[i] == '-')
                blink +="0";
            else if(screm[i] == '*')
                blink += "1";
        }

        //Converting String To int
        stringstream newint(blink);
        int dec=0;
        newint>>dec;//dec have integer value of blink
        int bin =BinaryToDecimal(dec);
        result = result + bin;

        if(screm == "caw caw")
        {
            cout<<result<<endl;
            bin=0;
            result=0;
        }
    }
    return 0;
}
