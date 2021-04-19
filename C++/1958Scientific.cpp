#include<bits/stdc++.h>
using namespace std;
int main(){

    long double num;
        char str[120];
        scanf("%LE",&num);
        sprintf(str,"%LE", num);
        if(str[0] != '-') cout<<"+";
        printf("%.4LE\n",num);

	return 0;
}

