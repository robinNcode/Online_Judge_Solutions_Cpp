#include<iostream>
using namespace std;
int main(){
	
	int num,large=0;
	
	while(cin>>num){
		if(num==0){
			break;
		}
		
		else if(num>=large){
			large=num;
		}
	}
	if(large==0) return 0;
	else cout<<large<<endl;
	return 0;
}
