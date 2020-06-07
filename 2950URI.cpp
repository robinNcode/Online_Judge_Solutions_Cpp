#include<bits/stdc++.h>
using namespace std;
int main(){

    int dia1,dia2,distance;
    double result=0.0;
    cin>>distance>>dia1>>dia2;
    result = (double) distance/(dia1+dia2);
    cout<<fixed<<setprecision(2);
    cout<<result<<endl;

	return 0;
}

