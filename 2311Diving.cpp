#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main(){
    int test;
    double num,arr[7];
    string str;
    cin>>test;
    while(test--){
        double sum=0;
        cin>>str>>num;
        for(int i=0; i<7; i++) cin>>arr[i];
        sort(arr,arr+7); //Finding large & small number from array
        for(int i=1; i<6; i++) sum+=arr[i];
        cout<<str<<" ";
        printf("%.2lf\n",sum*num);
    }
	return 0;
}
