#include<iostream>
#include<stdio.h>
using namespace std;
int main(int argc, char ** argv){

    int test;
    string num;
    cin>>test;
    while(test--){

        cin>>num;
        if(num.length() == 5) cout<<3<<endl;
        else if((num[0]=='t' && num[1]=='w')||(num[0]=='t'&&num[2]=='o')||(num[1]=='w'&&num[2]=='o')){
          cout<<2<<endl;
        }
        else cout<<1<<endl;

    }
	return 0;
}
