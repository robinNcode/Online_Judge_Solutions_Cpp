#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int marr[12]={0,31,29,31,30,31,30,31,31,30,31,30};
    int month,day;
    while(cin>>month>>day){
        int sum=0,fin=0;
        // Calculating Days
        for(int i=0; i<month; i++) sum = sum + marr[i];
        fin = sum + day;

        if(fin == 360) cout<<"E natal!\n";
        else if(fin == 359) cout<<"E vespera de natal!\n";
        else if(fin>360) cout<<"Ja passou!\n";
        else {
            fin = 360 - fin;
            cout<<"Faltam "<<fin<<" dias para o natal!\n";
        }
    }
	return 0;
}
