#include<bits/stdc++.h>
using namespace std;
int main(){

     int test,ptr1=0,ptr2=0;
     cin>>test;
     int num,even[100001],odd[100001];

     for (int i=0; i<test; i++){
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
    sort(even,even+ptr1);
    for(int i=0; i<ptr1; i++) cout<<even[i]<<endl;
    sort(odd,odd+ptr2);
    for(int i=ptr2-1; i>=0; i--) cout<<odd[i]<<endl;

	return 0;
}
