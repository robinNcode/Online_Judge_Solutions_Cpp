#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main(int argc, char ** argv){
    char ch;
    int po=11,re=7;
    double  arr[12][12],result = 0.0;

    cin>>ch;
    for(int ptr=0; ptr<12; ptr++){
            for(int loop=0; loop<12; loop++){
                cin>>arr[ptr][loop];
            }
    }

    for(int flag=1; flag<=10;flag++){
        if(flag<=5){
            for(int C=po; C<=11; C++)
                result+=arr[flag][C];
            po--;
        }
        else if(flag>=6){
            for(int C=re; C<=11; C++)
                result+=arr[flag][C];
            re++;
        }
    }

    cout<<fixed<<setprecision(1);
    if(ch == 'S'){
        cout<<result<<endl;
    }
    else if(ch == 'M'){
        result = result/30.0;
        cout<<result<<endl;
    }

	return 0;
}


