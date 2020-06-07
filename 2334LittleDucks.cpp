#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    unsigned long long int test;
    while(cin>>test){
        if(test==0) cout<<0<<endl;
        else if(test == -1)break;
        else cout<<test-1<<endl;
    }
	return 0;
}
