#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main(){
    char x = 1;
    string str ;
    cout<<"\t\t\tCreated By MsM Robin\n";
    getline(cin,str);
    for(int i=0; i<100; i++){
        if(i%2 == 0) printf("\t\t Eid Mubarak %c %c %c\n",x,x,x);
        else printf(" Eid Mubarak %c %c %c\n",x,x,x);
        Sleep(1000);
        }
	return 0;
}
