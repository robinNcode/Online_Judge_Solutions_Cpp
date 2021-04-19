#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int speed[test];
    for(int i=0; i<test; i++)cin>>speed[i];
    bool x=true;
    for(int i=0; i<test-1; i++){
    	if(speed[i]>speed[i+1]){
            x=false;
    		cout<<i+2<<endl;
    	    break;
    	}
    }
    if (x)cout<<"0\n";
	return 0;
}
