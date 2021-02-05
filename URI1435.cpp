#include<iostream>
#include<stdio.h>
#include <iomanip>
using namespace std;

int main(int argc, char ** argv){
    int index,layer,start,last;

    while(cin>>index){
        if(index == 0) break;
        int arr[index][index];

        layer = index/2;
        if(index % 2 == 1) layer++;
        start = 0;
        last = index-1;

        for(int ptr=1; ptr <= layer; ptr++){
            for(int row = start; row <= last; row++){
                for(int column =  start; column <= last; column++){
                    arr[row][column] = row;
                }
            }
            start++;
            last--;
        }

        for(int row = 0; row < index; row++){
            for(int column =  0; column < index; column++){
                if(column == 0) cout<<right<<setw(3)<<arr[row][column];
                else cout<<right<<setw(4)<<arr[row][column];
            }
            cout<<endl;
        }
        cout<<endl;
    }
	return 0;
}
