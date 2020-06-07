#include<iostream>
#include<stdio.h>
using namespace std;

// function to convert decimal to binary
void decToBinary(int n)
{
    int t=0,s,rem;
    while (n > 0) {
        // storing remainder in binary array
        rem = n % 2;
        n = n / 2;
        if(rem==1)
         {
            s++;
            if(s>=t) t=s;
        }
        else s=0;
    }
    cout<<t<<endl;
}
int main()
{
    int num,res;
    cin >> num;
     decToBinary(num);
    return 0;
}
