#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int HexadecimaltoDecimal(char num[]) {
   int len = strlen(num),base = 1,temp = 0;
   for (int i=len-1; i>=0; i--) {
      if (num[i]>='0' && num[i]<='9') {
         cout<<"Base = "<<base<<endl;
         temp += (num[i] - 48)*base;
         base = base * 16;
         cout<<"Temp = "<<base<<endl;
      }
      else if (num[i]>='A' && num[i]<='F') {
         temp += (num[i] - 55)*base;
         base = base*16;
         cout<<"Temp = "<<base<<endl;
      }
   }
   return temp;
}
}
int main(int argc, char ** argv){

                int  siz,i,decimalNumber;
                char hexdec[8];
                cout<<"\tHow many digit do you wanna enter ? but not more than 8:";
                cin>>siz;
                cout<<"\tEnter a Hexadecimal value :";
                for(i = 0; i < siz; i++) cin>>hexdec[i];
                decimalNumber = HexadecimaltoDecimal(hexdec); //Converting Hexadecimal to Decimal
                cout<<"\tDecimal form of given number is = "<<decimalNumber;
                //decimalNumber = 0;
	return 0;
}
