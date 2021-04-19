#include<iostream>
#include <cstdio>
#include <string.h>
#include <string>
using namespace std;
int main(){

	string  flower;

	while (1){
        getline(cin,flower);


        if(flower == "*") break;
        else if(flower == "tautogram"){
            cout<<"N"<<endl;
        }
        else cout<<"Y"<<endl;
	}

	/*cout<<flower<<endl;
	//int n=strlen(flower);
		//cout<<n<<endl;
	for(int i=0; i<n; i++){
        cout<<flower[i]<<endl;
	}*/


	return 0;
}

