//06-12-2020
#include<iostream>
#include <string>
using namespace std;

int main(){
    int ptr=0,len=0,test;
    string words;

    cin>>test;
    while(test--){
        cin>>words;
        len = words.length();
        if(len>10) cout<<words[0]<<len-2<<words[len-1]<<endl;
        else cout<<words<<endl;
    }
    return 0;
}
