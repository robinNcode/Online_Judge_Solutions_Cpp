#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main(int argc, char ** argv){
    char ch;
    int po=10,re=1;
    double  arr[12][12],result = 0.0;

    cin>>ch;
    for(int ptr=0; ptr<12; ptr++){
            for(int loop=0; loop<12; loop++){
                cin>>arr[ptr][loop];
            }
    }

    for(int row = 11; row >= 7; row--){
        for(int column=re; column <= po; column++){
            result += arr[row][column];
        }
        po--;
        re++;
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

