#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int test,i;
	
	cin>>test;
	
	char question[100000];
	
	for(i=1; i<=test; i++){
		cin.getline(question,100000,'?');
		cout<<"I am Toorg!"<<endl;
	}
	
	return 0;
}
