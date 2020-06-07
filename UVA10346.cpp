#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int cig,butts,rem,div,res;

    while(cin>>cig>>butts){
        res = cig;
        while(div > 0){
            div = cig / butts;
            //cout<<"div = "<<div<<endl;
            res = res + div;
            //cout<<"\tresult = "<<res<<endl;
            rem = cig % butts;
            //cout<<"rem = "<<rem<<endl;
            cig = div + rem;
            //cout<<"cig = "<<cig<<endl;
        }
        cout<<res<<endl;
        //res = 0;
        div = 1;
    }
	return 0;
}
