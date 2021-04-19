#include<iostream>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
string x="FEDCBA";
//Function For menu
void menu(){
    cout<<" \t\t\t****\t\tNumber Base conversion \t\t****\t\t\t " << endl<<endl<<endl;
    cout<<" \t\t\t================= Menu =================\n";
    cout<<" \t\t\t   0.Exit The Program\n";
    cout<<" \t\t\t   1.Decimal To Binary\n";
    cout<<" \t\t\t   2.Decimal To Octal\n";
    cout<<" \t\t\t   3.Decimal To Hexa-decimal\n\n";
    cout<<" \t\t\t   4.Binary To Decimal\n";
    cout<<" \t\t\t   5.Binary To Octal\n";
    cout<<" \t\t\t   6.Binary To Hexa-decimal\n\n";
    cout<<" \t\t\t   7.Octal To Decimal\n";
    cout<<" \t\t\t   8.Octal To Binary\n";
    cout<<" \t\t\t   9.Octal To Hexa-decimal\n\n";
    cout<<" \t\t\t   10.Hexa-decimal To Decimal\n";
    cout<<" \t\t\t   11.Hexa-decimal To Binary\n";
    cout<<" \t\t\t   12.Hexa-decimal To Octal\n";
    cout<<" \t\t\t================= +++++ =================\n";
}
void DecimaltoBinary(int num){
    int bin[50],i;
        for(i=0; num>0; i++){
            bin[i] = num%2;
            num = num/2;
        }
        cout<<"\tBinary of the given number is = ";
        for(i=i-1 ;i>=0;i--) cout<<bin[i];
}
void DecimaltoOctal(int num){
    int oct[50],i;
        for(i=0; num>0; i++){
            oct[i] = num%8;
            num = num/8;
        }
        cout<<"\tOctal of the given number is = ";
        for(i=i-1 ;i>=0;i--) cout<<oct[i];
}
void DecimaltoHex(int num){
    string hexstr;
    int hex;
        while (num>0){
            hex=num%16;
            num=num/16;
            if(hex<10){
                char cha;
                cha = hex+'0';
                hexstr = hexstr+cha;
            }
            else hexstr = hexstr+x[16-hex-1];
        }
        cout << "\tHexadecimal of the given number is = ";
        for (int i=hexstr.length()-1; i>=0; i--)cout<<hexstr[i];
}
int BinarytoDecimal(int num){
    int decimalNumber = 0,base = 1,temp = num;
   while (temp) {
      int lastDigit = temp % 10;
      temp = temp/10;
      decimalNumber += lastDigit*base;
      base = base*2;
   }
   return decimalNumber;
}
int OctaltoDecimal(int octalNumber){
    int decimalNumber = 0, i = 0, rem;
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
    }
    return decimalNumber;
}
int HexadecimaltoDecimal(int siz) {
    char hexdec[siz];
    cout<<"\tEnter a Hexadecimal value :";
    for(int i = 0; i < siz; i++) cin>>hexdec[i];
   int len = strlen(hexdec),base = 1,temp = 0;
   for (int i=len-1; i>=0; i--) {
      if (hexdec[i]>='0' && hexdec[i]<='9') {
         temp += (hexdec[i] - 48)*base;
         base = base * 16;
      }
      else if (hexdec[i]>='A' && hexdec[i]<='F') {
         temp += (hexdec[i] - 55)*base;
         base = base*16;
      }
      //cout<<hexdec[i]<<endl;
   }

   return temp;
}

int main(int argc, char ** argv){
    system("Color 7C"); //Changing color of console..
    menu(); //Menu is calling here....
    int choice;
    while(true){
        cout<<"\nEnter Your Choice :";
        cin>>choice;
        switch(choice){
            case 0:
                exit(0);
                break;
            case 1:
                int decBin;
                cout<<"\tEnter a decimal value :";
                cin>>decBin;
                DecimaltoBinary(decBin); //Converting Decimal to  Binary
                break;
            case 2:
                int decOct;
                cout<<"\tEnter a decimal value :";
                cin>>decOct;
                DecimaltoOctal(decOct); //Converting Decimal to  Octal
                break;
            case 3:
                int decHex;
                cout<<"\tEnter a decimal value :";
                cin>>decHex;
                DecimaltoHex(decHex); //Converting Decimal to  Hexa-decimal
                break;
            case 4:
                int binDec,decimalNumber;
                cout<<"\tEnter a binary value :";
                cin>>binDec;
                decimalNumber = BinarytoDecimal(binDec); //Converting Binary to Decimal
                cout<<"\tDecimal form of given number is = "<<decimalNumber;
                break;
            case 5:
                int binoct,OctalNumber;
                cout<<"\tEnter a binary value :";
                cin>>binoct;
                OctalNumber = BinarytoDecimal(binoct); //Converting binary to Decimal
                DecimaltoOctal(OctalNumber); //decimal to octal
                break;
            case 6:
                int binhex,decimalnum;
                cout<<"\tEnter a binary value :";
                cin>>binhex;
                decimalnum = BinarytoDecimal(binhex); //Converting binary to Decimal
                DecimaltoHex(decimalnum); //Decimal to hex
                break;
            case 7:
                int octdec;
                cout<<"\tEnter a Octal value :";
                cin>>octdec;
                decimalNumber = OctaltoDecimal(octdec); //Converting Octal to Decimal
                cout<<"\tDecimal form of given number is = "<<decimalNumber;
                break;
            case 8:
                int octbin;
                cout<<"\tEnter a Octal value :";
                cin>>octbin;
                OctalNumber = OctaltoDecimal(octbin); //Converting Octal to Decimal
                DecimaltoBinary(OctalNumber); //Decimal to binary
                break;
            case 9:
                int octhex;
                cout<<"\tEnter a Octal value :";
                cin>>octhex;
                OctalNumber = OctaltoDecimal(octhex); //Converting Octal to Decimal
                DecimaltoHex(OctalNumber); //Decimal to hex
                break;
            case 10:
                 int  siz;
                cout<<"\tHow many digit do you wanna enter ? but not more than 8:";
                cin>>siz;
                decimalNumber = HexadecimaltoDecimal(siz); //Converting Hexadecimal to Decimal
                cout<<"\tDecimal form of given number is = "<<decimalNumber;
                break;
            case 11:
                int BinaryNumber;
                cout<<"\tHow many digit do you wanna enter ? but not more than 8:";
                cin>>siz;
                BinaryNumber = HexadecimaltoDecimal(siz); //Converting Hexadecimal to Decimal
                DecimaltoBinary(BinaryNumber); //Converting decimal to binary
                break;
            case 12:
                cout<<"\tHow many digit do you wanna enter ? but not more than 8:";
                cin>>siz;
                OctalNumber = HexadecimaltoDecimal(siz); //Converting Hexadecimal to Decimal
                DecimaltoOctal(OctalNumber); //Converting decimal to octal
                break;
            default:
                cout<<"\tHey common , wrong choice !";
        }
    }

    return 0;
}
