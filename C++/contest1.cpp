#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int test=1;
    while(cin>>str){
        if (str == "*") break;
        else if (str == "Hajj") cout<<"Case "<<test<<": "<<"Hajj-e-Akbar"<<endl;
        else if (str == "Umrah") cout<<"Case "<<test<<": "<<"Hajj-e-Asghar"<<endl;
        else break;
        test ++;
    }
	return 0;
}

