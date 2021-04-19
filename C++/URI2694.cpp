#include<iostream>
#include<stdio.h>
#include <string>
using namespace std;
int main(int argc, char ** argv){

    int test;
    string str,digitStr;

    cin>>test;
    cin.ignore();

    while(test--){
        cin>>str;
        int counter = 0,sum = 0;
        for(int ptr=0; ptr<str.length(); ptr++){

            if(isdigit(str[ptr]) == true){
                digitStr += str[ptr];
            }
            else{
                 if(!digitStr.empty()){
                    sum += stoi(digitStr);
                    digitStr.clear();
                }
            }
        }
        if(!digitStr.empty()){
                sum += stoi(digitStr);
                digitStr.clear();
        }
        cout<<sum<<endl;
    }
	return 0;
}
