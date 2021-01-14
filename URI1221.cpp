#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int isPrime(int n, int i){
    if(i == 1) return 1;   // return statement terminates the recursive funtion
    else{
        if(n%i == 0)
            return 0;
        else
            isPrime(n, i-1);    // recursive call not using return statement
    }
}
int main(int argc, char ** argv){

    int test,prime;
    long num;
    cin>>test;

    while(test--){
        cin>>num;
        if(num == 2){
                cout<<"Prime\n";
                continue;
        }
        prime = isPrime(num,sqrt(num)+1);

        (prime == 1) ? cout<<"Prime\n" : cout<<"Not Prime\n";
    }
	return 0;
}
