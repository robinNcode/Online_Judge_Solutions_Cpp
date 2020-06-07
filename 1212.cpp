#include<bits/stdc++.h>
using namespace std;
long NumCarryAdd(long n1, long n2 ) {
    long a,b,c,t;
    c = 0;
    t = 0;
    while(1){
                 a=n1%10;
                 b=n2%10;
                 n1=n1/10;
                 n2=n2/10;
                 if((a+b+c)>=10){
                        t++;
                        c=1;
                 }
                 else c = 0;
                 if(n1==0 && n2==0)break;
    }
    return t;
}

int main(){

       long  num1,num2,carry;

        while(1){
                cin>>num1>>num2;
        if(num1 == 0 && num2 == 0) break;

        carry = NumCarryAdd(num1,num2);
        if (carry== 0)  cout<<"No carry operations.\n";
        else if(carry==1) cout<<"1 carry operation.\n";
        else cout<<carry<<" carry operations.\n" ;
        }
	return 0;
}


