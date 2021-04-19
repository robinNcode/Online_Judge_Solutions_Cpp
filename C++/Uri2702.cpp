#include<iostream>

using namespace std;

int main(){
	
	int chiken,beef,pasta;
	
	cin>>chiken>>beef>>pasta;
	
	int wchiken,wbeef,wpasta;
	
	cin>>wchiken>>wbeef>>wpasta;
	
	if(wchiken>chiken) chiken=wchiken-chiken;
	else chiken=0;
	if(wbeef>beef) beef=wbeef-beef;
	else beef=0;
	if(wpasta>pasta) pasta=wpasta-pasta;
	else pasta=0;
	
  	int	sum=0;
  	
  	sum=chiken+beef+pasta;
  	
  	cout<<sum<<endl;
	
	return 0;
}
