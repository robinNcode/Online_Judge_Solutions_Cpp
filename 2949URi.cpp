#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    char cha;
    int test,x=0,h=0,e=0,a=0,m=0;

    cin>>test;
    while(test--){
            cin>>str>>cha;

           if(cha =='X')  x++;
           else if(cha == 'H')h++;
           else if(cha == 'E')e++;
           else if(cha == 'A')a++;
           else if(cha == 'M')m++;
    }
    cout<<x<<" Hobbit(s)\n";
    cout<<h<<" Humano(s)\n";
    cout<<e<<" Elfo(s)\n";
    cout<<a<<" Anao(s)\n";
    cout<<m<<" Mago(s)\n";
	return 0;
}

