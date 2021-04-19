#include<bits/stdc++.h>
using namespace std;

void ascending_even(int data[] ,int n){
    int temp;
    for(int k=1; k<n;k++){
           for(int ptr=0;ptr<n-k;ptr++ ){
                   if (data[ptr]>data[ptr+1]){
                           temp=data[ptr];
                           data[ptr]=data[ptr+1];
                           data[ptr+1]=temp;
                       }
               }
         }
         for(int i=0;i<n;i++) cout<<data[i]<<"\n";
}
void descending_odd(int data[] ,int n){
    int temp;
    for(int k=1; k<n;k++){
           for(int ptr=0;ptr<n-k;ptr++ ){
                   if (data[ptr]>data[ptr+1]){
                           temp=data[ptr];
                           data[ptr]=data[ptr+1];
                           data[ptr+1]=temp;
                       }
               }
         }
         for(int i=n-1;i>=0;i--) cout<<data[i]<<"\n";
}
int main(){

     int test,ptr1=0,ptr2=0;
     cin>>test;
     int num,even[100001],odd[100001];

     while(test--){
        cin>>num;
        if(num%2 == 0){
            even[ptr1]=num;
            ptr1++;
        }
        else {
            odd[ptr2]=num;
            ptr2++;
        }
     }
    ascending_even(even,ptr1);
    descending_odd(odd,ptr2);

	return 0;
}
