#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int test;
    while(cin>>test){
        int num;
        if (test == 0) break;
        else{
            while(test--){
                cin>>num;
                if(num%2 == 0)cout<<(num*2)-2<<endl;
                else cout<<(num*2)-1<<endl;
            }
        }
    }
	return 0;
}
