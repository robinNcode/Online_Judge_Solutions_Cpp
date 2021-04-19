#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int test,count=1;
    cin>>test;
    int height[test];
     for(int i=0; i<test; i++) cin>>height[i];

     if(test==2 && height[0] == height[1]) count=0;
     else{
        for(int i=2; i<test; i++){
            if(height[i]>=height[i-1] && height[i-1] >= height[i-2]){
                    count=0;
                    break;
            }
            else if(height[i]<=height[i-1] && height[i-1] <= height[i-2]){
                    count=0;
                    break;
            }
        }
     }
     printf((count==1)?"1\n":"0\n");

	return 0;
}
