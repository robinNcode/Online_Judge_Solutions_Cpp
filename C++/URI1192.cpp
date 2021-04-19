#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int size,i;
	cin>>size;
			
    // assigning value to string s 
    string s; 
  	for(i=0; i<size; i++){
		cin>>s;
		int n = s.length(); 
  
    	// declaring character array 
    	char char_array[n + 1]; 
  
    	// copying the contents of the string to char array 
    	strcpy(char_array, s.c_str());
    	
  		int sub,add,lol[n];
    	for (int i = 0; i < n; i++) {
    		
    		cout<<i<<" = "<<char_array[i]<<endl;
    		
    		lol[i]=(int)char_array[i];
    		
    		cout<<lol[1]<<endl;
    		if(lol[1]>=65 && lol[1]<=90){
    			sub=lol[0]-lol[2];
    			cout<<sub<<endl;
			}
			else if(lol[1]>=97 && lol[1]<=122)
    		{
    			add=lol[0]+lol[2];
    			cout<<add<<endl;
			}
		}
		
	}
	return 0;
}
