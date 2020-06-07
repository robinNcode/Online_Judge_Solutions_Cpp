#include<bits/stdc++.h>
using namespace std;
int main(){

    int test,member,count=1;
     cin>>test;

     while(test--){
        cin>>member;
            int arr[member];
            for (int i=0; i<member; i++){
                cin>>arr[i];
            }
            int result;
            result=member/2;
            cout<<"Case "<<count<<": "<<arr[result]<<endl;
            count ++;
     }
	return 0;
}

