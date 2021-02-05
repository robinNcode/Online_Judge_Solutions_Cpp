#include<iostream>
#include<stdio.h>
using namespace std;
int main(int argc, char ** argv){

    int test, j;
    string str;
    long long leds;

    cin>>test;

    for(int i = 0; i < test; i++){
            cin>>str;
            cout<<str<<endl;
            j = 0;
            leds = 0;
            while(true){
                        if(str[j] == ' ') break;
                        else if(str[j] == '1') leds += 2;
                        else if(str[j] == '2') leds += 5;
                        else if(str[j] == '3') leds += 5;
                        else if(str[j] == '4') leds += 4;
                        else if(str[j] == '5') leds += 5;
                        else if(str[j] == '6') leds += 6;
                        else if(str[j] == '7') leds += 3;
                        else if(str[j] == '8') leds += 7;
                        else if(str[j] == '9') leds += 6;
                        else if(str[j] == '0') leds += 6;
                        j++;
            }
        cout<<leds<<" leds\n";
    }
    return 0;
}
