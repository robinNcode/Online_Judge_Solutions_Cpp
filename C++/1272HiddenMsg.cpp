#include<iostream>
#include<string.h>
using namespace std;
int main(){

    string str; int test;
   cin>>test;

   while(test--){
    cin.ignore();
     getline(cin,str);

        cout<<str<<endl;
        		int n = str.length();
    	// declaring character array
    	char char_array[n + 1];

    	// copying the contents of the string to char array
    	strcpy(char_array, str.c_str());
    	for (int i = 0;i<n; i++) {
    	    if (char_array[i]=='.') {
                    continue;
    	    }
    	    cout<<char_array[i];
    	}
    	cout<<endl;
    	str="robin";
   }



	return 0;
}

