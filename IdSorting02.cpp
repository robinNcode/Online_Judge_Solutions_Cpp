#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
     
    int size ,i,sum=0;
    cout<<"How many student's ID do want enter :";
    cin>>size;

	string id[size];
	int newid[size];
	
    for(i=0;i<size;i++){
    	cin>>id[i];
    	int n = id[i].length(); 
  
    	// declaring character array 
    	char char_array[n + 1]; 
  
    	// copying the contents of the string to char array 
    	strcpy(char_array, id[i].c_str());
    	
  		int newdec[n];
  		
    	for (int i = 0; i < n; i++) {
    		//cout <<"new = "<<char_array[i]<<" ";
    		newdec[i]=(int)char_array[i];
    		//cout <<"newDec = "<<newdec[i]<<endl;
    		sum=sum+newdec[i];
		}
		
		
		newid[size]=sum;
	}
	int k,ptr,temp;
	for(k=1;k<size;k++)
        {
        	for(ptr=0;ptr<size-k;ptr++ )
				{
                   if (newid[ptr]>newid[ptr+1])
                    {
                        temp=newid[ptr];
                        newid[ptr]=newid[ptr+1];
                        newid[ptr+1]=temp;
                    }
               }
        cout<<"Id = "<<newid[k]<<endl;
        }
	
	return 0;
	
}
