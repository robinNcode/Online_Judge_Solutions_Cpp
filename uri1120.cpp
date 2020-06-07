#include<iostream>
#include<string.h>
#include <sstream>  // for string streams 
#include <string>  // for string
#include<stdlib.h>//for itoa,stoi functions
using namespace std;
int main(){
	
	int d,n;
	
	cin>>d>>n;
	
	char lol;
	itoa(d,&lol,10);
	
	// declaring output string stream 
    ostringstream str1; 
  
    // Sending a number as a stream into output string 
	str1 << n;
	// the str() coverts number into string 
    string newstr1;
	newstr1 = str1.str();
	
	cout<<"str = "<<newstr1<<endl;
	int size = newstr1.length();
	// declaring character array
	char charArray[size+1];
	
	strcpy(charArray ,newstr1.c_str());
	
	for(int i=0; i<size; i++){
		
		cout<<"CHAR = "<<charArray[i]<<" ";
	}
	
	return 0;	
}
