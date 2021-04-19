#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(int argc, char ** argv){
    int test,num1,num2;
    string str;
    cin>>test;

    while(test--){
        cin>>num1>>num2;
        for(int ptr=num1; ptr<=num2; ptr++){
            cout<<ptr;
            str = str + to_string(ptr); //concatenating strings
        }
        int len = str.length();
        for(int loop = len-1; loop>=0; loop--){
            cout<<str[loop];
        }
        str = "";
        cout<<endl;
    }
	return 0;
}
