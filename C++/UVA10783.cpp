#include<iostream>
using namespace std;
int main(){
	int a,b,i,test,loop,sum=0;
	cin>>test;
    for(i=1; i<=test; i++){
        cin>>a>>b;
        if(a%2!=0 && b%2!=0){
        for(loop=a; loop<=b; loop+=2){
            sum=sum+loop;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        sum=0;
        }
        else if(a%2!=0 && b%2==0){
        for(loop=a; loop<b; loop+=2){
            sum=sum+loop;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        sum=0;
        }
        else if(a%2==0 && b%2!=0){
        for(loop=a+1; loop<=b; loop+=2){
            sum=sum+loop;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        sum=0;
        }
        else {
        for(loop=a+1; loop<b; loop+=2){
            sum=sum+loop;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        sum=0;
        }
    }
	return 0;
}

