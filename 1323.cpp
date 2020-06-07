#include<bits/stdc++.h>
using namespace std;
int main(){

    int edge,i,square;

    while(cin>>edge){
        int grid=0;
        if(edge == 0) break;
        for(i=edge; i>0; i--){
            square=i*i;
            grid = grid+square;
        }
        cout<<grid<<endl;
        }

	return 0;
}

