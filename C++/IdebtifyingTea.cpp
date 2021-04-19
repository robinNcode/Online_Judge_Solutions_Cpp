#include<iostream>

using namespace std;

int main(){

   int tea,i,count=0,count1=0;
   cin>>tea;

   int number[5];
    for(i=0; i<5; i++){
        cin>>number[i];
        //cout<<number[i]<<endl;
        if (tea==number[i]) count++;
        else count1++;
    }
    if(count1==5) cout<<0<<endl;
    else cout<<count<<endl;

return 0;
}
