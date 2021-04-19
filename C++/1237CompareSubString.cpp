#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){

    char str1[51],str2[51];
    int i,j,l1,l2;
    //cin.getline(str1,0);
    //cin.getline(str2,0);

while(true){
        gets(str1);
        gets(str2);
        int count=0;
        l1 =  strlen(str1);
        l2= strlen(str2);
        if(l1>l2){
                for(i=0; i<l1; i++){
                    for(j=0; j<l2; j++){
                        if((int)str1[i]==32 || (int)str2[j]==32) continue;
                        if(str1[i] == str2[j]) count++;
                    }
                }
        }
        else{
            for(i=0; i<l2; i++){
                    for(j=0; j<l1; j++){
                        if((int)str1[i]==32 || (int)str2[j]==32) continue;
                        if(str2[i] == str1[j]) count++;
                    }
                }
        }
     cout<<count<<endl;
     //cout<<"str1 = "<<str1<<endl<<str2<<endl;
}
	return 0;
}

