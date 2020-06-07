#include<iostream>
#include<string.h>
using namespace std;
int main(){

	int test,force;
	string name;
	cin>>test;
	while(test--){
        cin>>name>>force;
        if(name=="Thor") cout<<"Y"<<endl;
        else cout<<"N"<<endl;
	}
	return 0;
}

