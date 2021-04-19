#include<iostream>
using namespace std;
int main(){
	
	int comp,sheet,pos;
	cin>>comp>>sheet>>pos;
	
	int pro;
	pro=comp*pos;
	if (sheet<pro) cout<<"N"<<endl;
	else cout<<"S"<<endl;
	return 0;
}
