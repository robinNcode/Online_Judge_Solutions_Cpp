#include<bits/stdc++.h>
using namespace std;
int main(){
    int side,length;
    cin>>side>>length;
    if(3<= side && side<=1000000 && 1 <= length && length <= 4000)
        cout<<side*length<<endl;

	return 0;
}

