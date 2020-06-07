#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main(){
    int test;
    float len;
    string str;
    cin>>test;
    cin.ignore();
    while(test--){
        cin>>str;
        len = str.length() * 0.01;
        cout<<fixed<<setprecision(2);
        cout<<len<<endl;
    }
	return 0;
}

