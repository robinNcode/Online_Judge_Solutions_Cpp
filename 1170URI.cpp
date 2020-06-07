#include<bits/stdc++.h>
using namespace std;
int main(){
     float food,i;
     int test;

     cin>>test;
     while(test--){
        cin>>food;
        int count=0;
        for(i=food; food >1 ; food/=2){
            count++;
        }
        cout<<count<<" dias\n";
     }
	return 0;
}
