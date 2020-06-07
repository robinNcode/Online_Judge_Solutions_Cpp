#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main(){
    int test,arr[3];
    cin>>test;
    for(int i=1; i<=test; i++){
        for(int j=0; j<3; j++) cin>>arr[j];
        sort(arr,arr+3);
        cout<<"Case "<<i<<": "<<arr[1]<<endl;
    }
	return 0;
}
