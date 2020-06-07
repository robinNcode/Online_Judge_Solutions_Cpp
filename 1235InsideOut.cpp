#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    int test,length,cut=0;
    cin>>test;

    char sen[101];
    cin.getline(sen,0);

    while(test--){
        cin.getline(sen,101);
        length = strlen(sen);

        if(length%2 ==0) {
                cut = (length/2);
                for(int i=cut-1; i>=0; i--) cout<<sen[i];
                for(int i=length-1; i>=cut; i--) cout<<sen[i];
                cout<<endl;
        }
        else{
                cut = (length/2);
                for(int i=cut+1; i>=0; i--) cout<<sen[i];
                for(int i=length-1; i>=cut+2; i--) cout<<sen[i];
                cout<<endl;
        }

    }
	return 0;
}
