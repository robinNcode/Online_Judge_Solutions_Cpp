#include<iostream>
#include<stdio.h>
using namespace std;

int factorial(int n){
    if(n > 1) return n * factorial(n - 1);
    else return 1;
}

int main(){

    int num,i,count=0,sum=0,fact;
    cin>>num;
    for(i=1; i<num; i++){
        while(sum <= num){
            fact = factorial(i);
            cout<<"Fact = "<<fact<<endl;
            sum = sum + fact;
            cout<<"sum = "<<sum<<endl;
            count++;
        }
    }
    cout<<count<<endl;
	return 0;
}

