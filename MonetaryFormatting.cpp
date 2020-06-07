#include<bits/stdc++.h>
using namespace std;
int main()
{

    int size1,size2;
    string dollar,cents;

    while(cin>>dollar>>cents){
        size1 = dollar.length();
        cout<<"$";
        for(int i=0; i<size1; i++){
            if((size1-i) %3 ==0 && i>0) cout<<",";
            cout<<dollar[i];
        }
        cout<<".";
        size2 = cents.size();
        if(size2 <2) cout<<"0";
        for(int i=0; i<size2; i++){
            cout<<cents[i];
        }
        cout<<endl;
    }
    return 0;
}

