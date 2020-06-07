#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n);
int main ()
{
    string str;
    while( cin >> str){
            if (str == "0") break;
            int sum=0,mul=0,intOfChar=0;
    int length = str.length();
    for (int loop=length; loop>0; loop--){
        intOfChar = (int)str.at(length-loop)-48;
        //cout<<"intOfChar ="<<intOfChar <<endl;
        mul = intOfChar*factorial(loop);
        //cout<<"mul = "<<mul<<endl;
        sum = sum + mul;
    }
    cout<<sum<<endl;

    }
    return 0;
}
int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
