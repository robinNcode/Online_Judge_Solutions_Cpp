#include<bits/stdc++.h>
using namespace std;
int main(){

    int test,par=0,impar=0;
    cin>>test;
    char str[1001];

    for(int i =0; i<test; i++){
        cin>>str;
        int j=0;
            while(true){
                if(str[j]=='\0') break;
                if(str[j] == '<') par++;
                else if(str[j] == '>'){
                        if(par>0){
                            impar++;
                            par--;
                        }
                }
                j++;
            }
        cout<<impar<<endl;
        impar=0;
    }
	return 0;
}

