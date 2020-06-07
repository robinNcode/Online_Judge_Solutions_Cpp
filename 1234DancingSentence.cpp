#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){

    char str[51];
    int l,temp;
    //cin.getline(str,0);


    while(gets(str)){
            l=strlen(str);

            for(int i=0; i<l; i++){
                if(str[i]>='A' && str[i]<='Z') {
                       temp = (int)str[i]-32;
                        cout<<(char)temp;
                }
            }
            cout<<endl;
    }
	return 0;
}

