#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(int argc, char ** argv)
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    cout<<"A = "<<num1<<", B = "<<num2<<", C = "<<num3<<endl;
    cout<<"A = "<<setw(10)<<num1;
    cout<<", B = "<<setw(10)<<num2;
    cout<<", C = "<<setw(10)<<num3<<endl;
    if(num1 < 0){
        int nnum1 = abs(num1);
        cout<<"A = -"<<setfill('0')<<setw(10)<<nnum1;
        cout<<", B = "<<setfill('0')<<setw(10)<<num2;
        cout<<", C = "<<setfill('0')<<setw(10)<<num3<<endl;
    }
    else if(num2 < 0){
        int nnum2 = abs(num2);
        cout<<"A = "<<setfill('0')<<setw(10)<<num1;
        cout<<", B = -"<<setfill('0')<<setw(10)<<nnum2;
        cout<<", C = "<<setfill('0')<<setw(10)<<num3<<endl;
    }
    else if(num3 < 0){
        int nnum3 = abs(num3);
        cout<<"A = "<<setfill('0')<<setw(10)<<num1;
        cout<<", B = "<<setfill('0')<<setw(10)<<num2;
        cout<<", C = -"<<setfill('0')<<setw(10)<<nnum3<<endl;
    }
    else if(num1 < 0 && num2 < 0 && num3 > 0){
        int nnum1 = abs(num1);
        int nnum2 = abs(num2);
        cout<<"A = -"<<setfill('0')<<setw(10)<<nnum1;
        cout<<", B = -"<<setfill('0')<<setw(10)<<nnum2;
        cout<<", C = "<<setfill('0')<<setw(10)<<num3<<endl;
    }
    else if(num1 > 0 && num2 < 0 && num3 < 0){
        int nnum3 = abs(num3);
        int nnum2 = abs(num2);
        cout<<"A = "<<setfill('0')<<setw(10)<<num1;
        cout<<", B = -"<<setfill('0')<<setw(10)<<nnum2;
        cout<<", C = -"<<setfill('0')<<setw(10)<<num3<<endl;
    }
    else if(num1 < 0 && num3 < 0 && num2 > 0){
        int nnum1 = abs(num1);
        int nnum3 = abs(num3);
        cout<<"A = -"<<setfill('0')<<setw(10)<<nnum1;
        cout<<", B = "<<setfill('0')<<setw(10)<<num2;
        cout<<", C = -"<<setfill('0')<<setw(10)<<nnum3<<endl;
    }
    else if(num1 < 0 && num3 < 0 && num2 < 0){
        int nnum1 = abs(num1);
        int nnum2 = abs(num2);
        int nnum3 = abs(num3);
        cout<<"A = -"<<setfill('0')<<setw(10)<<nnum1;
        cout<<", B = -"<<setfill('0')<<setw(10)<<nnum2;
        cout<<", C = -"<<setfill('0')<<setw(10)<<nnum3<<endl;
    }
    else{
        cout<<setfill('0');
        cout<<"A = "<<setw(10)<<num1;
        cout<<", B = "<<setw(10)<<num2;
        cout<<", C = "<<setw(10)<<num3<<endl;
    }
    cout<<setfill(' ');
    cout<<"A = "<<left<<setw(10)<<num1;
    cout<<", B = "<<left<<setw(10)<<num2;
    cout<<", C = "<<left<<setw(10)<<num3<<endl;
    return 0;
}
