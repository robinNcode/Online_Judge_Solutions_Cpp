#include<iostream>
#include<stdio.h>
#include <string.h>
using namespace std;
int main()
{
	int size,i,sift;
	cin>>size;

    // assigning value to string s
    string s;
  	for(i=0; i<size; i++){
		cin>>s>>sift;
		int n = s.length();

    	// declaring character array
    	char char_array[n + 1];

    	// copying the contents of the string to char array
    	strcpy(char_array, s.c_str());

  		int newdec[n];
    	for (int i = 0; i < n; i++) {

    		newdec[i]=((int)char_array[i])-sift;

			//cout <<"new = "<<newdec[i]<<endl;
			if(newdec[i]<65){
				newdec[i]=newdec[i]+26;
				cout<<(char)newdec[i];
			}
			else cout<<(char)newdec[i];
		}
      cout<<endl;
	}
    return 0;
}
