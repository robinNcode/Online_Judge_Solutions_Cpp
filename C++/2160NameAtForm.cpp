#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char lol[501];
    int len;
    cin.getline(lol,501);
    len = strlen(lol);
    if(len < 81) cout<<"YES\n";
    else cout<<"NO\n";

	return 0;
}
