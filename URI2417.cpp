#include<iostream>
using namespace std;
int main(){
	
	int cw,cd,cg,fw,fd,fg;
	int ccount,fcount;
	cin>>cw>>cd>>cg>>fw>>fd>>fg;
	
	cw=cw*3;
	cd=cd*1;
	fw=fw*3;
	fd=fd*1;
	
	ccount=cw+cd;
	fcount=fw+fd;
	
	if(ccount>fcount ||ccount==fcount && cg>fg ) cout<<"C"<<endl;
	else if(ccount==fcount && cg==fg) cout<<"="<<endl;
	else cout<<"F"<<endl;
	
	return 0;
}
