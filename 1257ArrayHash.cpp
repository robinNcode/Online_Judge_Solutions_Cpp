#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int test,query,len,intof;
    string str;
    cin>>test;

    while(test--){
            int sum=0,add=0;
        cin>>query;
        for(int i=0; i<query; i++){
            cin>>str;
            len = str.length();
            for(int j=0; j<len; j++){
                intof = (int)str[j] - 65;
                //cout<<str[j]<<" intof = "<<intof<<" i = "<<i<<" j = "<<j<<endl;
                add = intof+i+j;
                sum = sum+add;
                //cout<<"Sum = "<<sum<<endl;
            }
        }
        cout<<sum<<endl;
    }
	return 0;
}
