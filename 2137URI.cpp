#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(int argc, char ** argv){

    int test;
    string code,books[1000];

    while(cin>>test){
        for(int ptr=0; ptr<test; ptr++){
            cin>>code;
            books[ptr] = code;
        }
        sort(books,test+books);
        for(int ptr=0; ptr<test; ptr++) cout<<books[ptr]<<endl;
    }

	return 0;
}
