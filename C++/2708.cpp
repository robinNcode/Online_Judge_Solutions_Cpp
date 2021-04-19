#include<iostream>
using namespace std;
int main(){
	
	string car;
	int amnt,scount=0,vcount=0,ssum=0,vsum=0;
	
	while(cin>>car){
		if(car=="ABEND") break;
		else
		 cin>>amnt;
		//cout<<car<<" "<<amnt<<endl;
		if(car=="SALIDA"){
			ssum=ssum+amnt;
			scount++;
		}
		else if(car=="VUELTA"){
			vsum=vsum+amnt;
			vcount++;
		}
		
	}
	int sum,count;
	sum=ssum-vsum;
	count=scount-vcount;
	
	cout<<sum<<endl<<count<<endl;
	return 0;
}
