#include<bits/stdc++.h>
using namespace std;
int main(){
    int laps,signs;
    double result=0.0, i;
    cin>>laps>>signs;

    for( i=0.1; i<=0.8; i+=0.1){
        result =(double) (laps*signs*i);
        cout<<(int)ceil(result)<<" ";
    }
        result =(double) (laps*signs*0.9);
        cout<<(int)ceil(result)<<endl;
	return 0;
}

