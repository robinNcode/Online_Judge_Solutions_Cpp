#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int clothes,la,lb,sa,sb;
    cin>>clothes>>la>>lb>>sa>>sb;
    if(clothes>=la && clothes<=lb && clothes>=sa && clothes<=sb) cout<<"possivel\n";
    else cout<<"impossivel\n";

	return 0;
}

