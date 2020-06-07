#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main(){
    int  test,query,i,j;

    cin>>test;
    for(int lol=1; lol<=test; lol++){
        cin>>query;
        int arr[query],temp=0;
        for( i=0; i<query; i++) cin>>arr[i];
        sort(arr,arr+query);
        cout<<"Case "<<lol<<": "<<arr[query-1]<<endl;
    }
	return 0;
}

