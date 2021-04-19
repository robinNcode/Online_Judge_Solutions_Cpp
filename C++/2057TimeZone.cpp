#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int dep,time,zone;

    cin>>dep>>time>>zone;

    time = dep+time;

    if(time>24){
        dep=time-24;
        cout<<dep+zone;
    }
    else if()



	return 0;
}
