#include<bits/stdc++.h>
using namespace std;
string x="FEDCBA";
int main()
{
    string newstr;
    int num=0,hex;
    cin>>num;
            while (num>0){

                hex=num%16;
                num=num/16;
                if(hex<10){
                    char cha;
                    cha = hex+'0';
                    newstr = newstr+cha;
                }
                else newstr = newstr+x[16-hex-1];
            }
            for (int i=newstr.length()-1; i>=0; i--)cout<<newstr[i];
            cout<<endl;
    return 0;
}
