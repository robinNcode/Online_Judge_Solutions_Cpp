#include<iostream>
#include<string.h>
#include<sstream> // for string

using namespace std;
int main(){

	int d,i;
	long long int n;
	while(cin>>d>>n){
	    if(d==0 && n==0) break;
        else
        {
        	char str1  = d+'0';
	        // the stringstream coverts number into string
	        stringstream lol;
	        lol<<n;
            string str2;
            lol>>str2;

        	//cout<<"str="<<str2;
	    	int size = str2.length();
	    	//cout<<"size = "<<size<<endl;
	    	int j=0,count1=0,count2=0;
            string fin;
    	    for (i = 0; i < size; i++)
    	    {
			    //cout<<"new = "<<char_array[i]<<" ";
			    if(str2[i]==str1){
                        count1++;
                        continue;
			    }
                fin[j]=str2[i];
                j++;
			}
			//cout<<"j = "<<j<<endl;
			for(i=0; i<j; i++) {
                    if(fin[i] == '0') count2++;
			}
			if(size==count1 )cout<<0;
            else if(j==count2)cout<<0;
            else
                for(i=0; i<j; i++) cout<<fin[i];
			cout<<endl;
		//cout<<"count1 = "<<count1<<"count2 = "<<count2<<endl;
        }

	}
	return 0;
}
