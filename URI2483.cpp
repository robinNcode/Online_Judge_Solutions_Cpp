#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	int n,i,p;
	
	p=pow(10,4);
	
	cin>>n;
	if(n>1 && n<=p){
		
		cout<<"Feliz nat";
		for(i=1; i<=n; i++) cout<<"a";
		cout<<"l!"<<endl;	
	}
	
	return 0;
}
