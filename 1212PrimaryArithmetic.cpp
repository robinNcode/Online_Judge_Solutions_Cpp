#include<bits/stdc++.h>
using namespace std;
int main(){

    unsigned int num1,num2;

    while(cin>>num1>>num2){
        if(num1 == 0 && num2 == 0) break;
        else{
            string str1,str2;
                                //<<< integer to string convertion
            stringstream convert1,convert2;
            convert1<<num1;
            convert2<<num2;

            str1 = convert1.str();
            str2 = convert2.str();

            int length1 = str1.length();
            int length2 = str2.length();

            int intstr1[length1],intstr2[length2];

            for (int i=0; i<length1; i++){
                intstr1[i] = ((int)str1[i])-48;
                //cout<<"intstr1 = "<<intstr1[i]<<endl;
            }
            for (int i=0; i<length2; i++){
                intstr2[i] = ((int)str2[i])-48;
                //cout<<"intstr2 = "<<intstr2[i]<<endl;
            }
            int count=0,add;
            for (int i=0; i<length2; i++){
                add=intstr1[i]+intstr2[i];
                if (add>9){
                    count++;
                }
            }
            if(count>0) cout<<count<<" carry operations.\n";
            else cout<<"No carry operations.\n";
        }
    }

	return 0;
}

