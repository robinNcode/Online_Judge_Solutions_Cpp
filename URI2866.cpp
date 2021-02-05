#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(int argc, char ** argv){
    int test;
    string str,myStr;
    cin>>test;

    while(test--){
        cin>>str;
        int len = str.length();

        for(int ptr=0; ptr<len; ptr++){
           if(str[ptr] >= 'a' &&  str[ptr] <= 'z'){
                myStr += str[ptr];  //concatenating strings
           }
        }

        int myLen = myStr.length();
        for(int loop = myLen-1; loop>=0; loop--){
            cout<<myStr[loop];
        }

        myStr = "";
        cout<<endl;
    }
	return 0;
}


