#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
	
	int in,i,product,quantity;
	double out,sum=0;
	cin>>in;
	
	while(in--){
		cin>>product>>quantity;
		
		if(product==1001){
			out=quantity*1.5;
		}
		else if(product==1002){
			out=quantity*2.5;
		}
		else if(product==1003){
			out=quantity*3.5;
		}
		else if(product==1004){
			out=quantity*4.5;
		}
		else if(product==1005){
			out=quantity*5.5;
		}
	    sum=sum+out;
		out=0;
	}
	cout<<fixed<<setprecision(2);
	cout<<sum<<endl;	
	return 0;
}
