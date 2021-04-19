#include<bits/stdc++.h>
using namespace std;
int main(){

   long long int num1,num2;

    while(cin>>num1>>num2){
        if(num1>num2) cout<<num1-num2<<endl;
        else cout<<num2-num1<<endl;
    }
	return 0;
}

