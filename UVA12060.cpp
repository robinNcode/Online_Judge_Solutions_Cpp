#include<bits/stdc++.h>
using namespace std;
int main(){

    int test,num;

    while (cin>>test){
        int intavg;
        float sum=0,avg=0;
        if (test==0) break;
        for  (int i=0; i<test; i++){
            cin>>num;
            sum=sum+num;
        }
        avg = sum/test;
        //cout<<avg<<endl;
        intavg = (int)avg;
        //cout<<"int avg = "<<intavg<<endl;

        if(intavg<avg && avg<1){
            cout<<sum<<endl;
            cout<<"-\n";
            cout<<test<<endl;
        }
        else if(intavg < avg && avg>1){
            cout<<" "<<sum/intavg<<endl;
            cout<<intavg<<"-\n";
            cout<<" "<<test<<endl;
        }
        else if (intavg == avg) cout<<avg<<endl;

    }
	return 0;
}

