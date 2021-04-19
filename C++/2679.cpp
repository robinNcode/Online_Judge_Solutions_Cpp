#include<iostream>
using namespace std;
int main(){
	
	int test;
	
	cin>>test;
	
	if(test%2==0){
		test=test+2;
		cout<<test<<endl;
	}
	else {
		cout<<test+1<<endl;	
	}
	return 0;
}
