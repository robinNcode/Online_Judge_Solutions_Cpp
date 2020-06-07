#include<bits/stdc++.h>
using namespace std;
int Rafael(int x,int y){
    int result=0;
    result= pow(3*x,2)+y*y;
    return result;
}
int Beto(int x,int y){
    int result=0;
    result= 2*pow(x,2)+pow(5*y,2);
    return result;
}
int Carlos(int x,int y){
    int result=0;
    result=-100*x+pow(y,3);
    return result;
}
int main(){

    int x,y,test,a,b,c;
    cin>>test;

    while(test--){
        cin>>x>>y;
        a=Rafael(x,y);
        b=Beto(x,y);
        c=Carlos(x,y);

        if(a>b & a>c) cout<<"Rafael ganhou\n";
        else if(b>a & b>c) cout<<"Beto ganhou\n";
        else cout<<"Carlos ganhou\n";
    }
	return 0;
}
