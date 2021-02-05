#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main(int argc, char ** argv){
    char ch;
    int  box=0;
    double  arr[12][12],result = 0.0;

    cin>>ch;
    for(int ptr=0; ptr<12; ptr++){
            for(int loop=0; loop<12; loop++){
                cin>>arr[ptr][loop];
            }
    }

    for(int row=1; row<=11; row++){
        for(int column=0; column<=row-1; column++){
            result += arr[row][column];
            box++;
        }
    }

    cout<<fixed<<setprecision(1);
    if(ch == 'S'){
        cout<<result<<endl;
    }
    else if(ch == 'M'){
        result = result/box;
        cout<<result<<endl;
    }

	return 0;
}
