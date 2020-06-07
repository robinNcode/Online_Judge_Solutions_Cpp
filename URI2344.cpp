#include<iostream>
using namespace std;
int main(){
	
	int num;
	
	cin>>num;
	if(num==0) cout<<"E"<<endl;
	else if(num>0 && num<36) cout<<"D"<<endl;
	else if(num>35 && num<61) cout<<"C"<<endl;
	else if(num>60 && num<86) cout<<"B"<<endl;
	else if(num>85 && num<101) cout<<"A"<<endl;
	
	return 0;
}
