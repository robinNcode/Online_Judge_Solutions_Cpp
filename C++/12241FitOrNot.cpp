#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){

    int test,i,j;
    cin>>test;
    cin.ignore();
    //char str1[1001],str2[1001];
    string str1,str2;
    while(test--){
        cin>>str1>>str2;
        int l1,l2,i,j,count=0;

        //l1=strlen(str1);
        //l2=strlen(str2);
        l1=str1.length();
        l2=str2.length();
        //cout<<"l1= "<<l1<<endl;
        //cout<<"l2= "<<l2<<endl;
        j=l2-1;
        cout<<"final = "<<l1-1-j<<endl;
        if(l1>=l2){
                for(i=l1-1; i>=l1-1-j; i--){
                    while(j !=0){
                            cout<<"str1 = "<<str1[i]<<endl;
                            cout<<"\t\tstr2 = "<<str2[j]<<endl;
                            cout<<"j = "<<j<<endl;
                            j--;
                            /*if(str1[i] == str2[j]){
                                count++;
                                j--;
                            }*/
                    }
            }
            if(count==l2-1)cout<<"encaixa\n";
            else cout<<"nao encaixa\n";
        }
        else cout<<"nao encaixa\n";

    }

	return 0;
}

