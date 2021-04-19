#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int test,query;
    string jumps;
    cin>>test;

    while(test--){
        cin>>query;
        int num[query],count=0;
        for(int i=0; i<query; i++){
            cin>>num[i];
        }
        cin>>jumps;
        for(int i=0; i<query; i++){
            if(num[i] <3 && jumps[i]=='S') count++;
            else if(num[i]>2 && jumps[i]=='J')count++;
        }
        cout<<count<<endl;
    }
	return 0;
}
