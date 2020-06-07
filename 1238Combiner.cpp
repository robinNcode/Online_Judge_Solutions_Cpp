#include<bits/stdc++.h>
using namespace std;
int main(){
     int test;
    string str1,str2,final;
    char temp,temp2;
    int i,j;
    cin>>test;


    while(test--){
        cin>>str1>>str2;

        int siz1,siz2;
        siz1=str1.size()-1;
        siz2=str2.size()-1;

        for( i=0; i<=siz1;  i++){
            final[i]=str1[i];
            if(i==siz1-1){
                    temp=str1[i];
                    final[i]=str2[0];
            }
            final[siz1]=temp;
            temp2=str1[siz1];
        }
        for(j=0; j<=siz2; j++){
             if(j==0){
                str2[j]=str2[1];
                str2[1]=temp2;
             }
        }
        for(i=0; i<=siz1; i++) cout<<final[i];
        for( i=0; i<=siz2;  i++)cout<<str2[i];
        cout<<endl;
    }
	return 0;
}

