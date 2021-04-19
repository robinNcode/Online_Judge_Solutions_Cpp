#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){

    int words,line,cha,len,a,b;
    while(cin>>words>>a>>cha){
            string str;
        /*while(words--){
            cin>>str;
            str+=str;
        }*/
        cin.ignore();
        getline(cin,str);
        len = str.length();
        cout<<"len = "<<len<<endl;
        float lol = (len+0.0)/cha;
        line =ceil(lol);
        cout<<"line = "<<line<<endl;
        cout<<"a = "<<a<<endl;

        int page =(float)(line+0.0/a);
        cout<<page<<endl;
    }
	return 0;
}
