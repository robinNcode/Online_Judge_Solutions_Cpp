#include<bits/stdc++.h>
using namespace std;
int main(){

    float num,sum=.0;
    int count=0;

    for(int i=0; i<6; i++){
            cin>>num;
            if(num>0){
                sum=sum+num;
                count++;
            }
    }
    cout<<count<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1);
    cout<<sum/count<<endl;
	return 0;
}
