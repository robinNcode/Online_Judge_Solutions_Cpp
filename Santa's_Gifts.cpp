#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main(int argc, char ** argv){

    int howMany,moja=0;
    cin>>howMany;

    int gift[howMany];
    for(int ptr=0; ptr<howMany; ptr++){
        cin>>gift[ptr];
    }

    sort(gift,howMany+gift);

    for(ptr=1; ptr<howMany; ptr++){
        for(loop=0; loop<howMany-1; loop++){
            if(gift[ptr] == gift[loop]) moja = moja+gift;
            else )
        }
    }
    cout<<"2nd last = "<<gift[howMany-2]<<endl;
    cout<<"last = "<<gift[howMany-1]<<endl;

	return 0;
}

