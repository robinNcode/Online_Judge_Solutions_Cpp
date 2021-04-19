#include <bits/stdc++.h>
using namespace std;
int main(int argc, char ** argv){

    int fst,scnd,sum;

    while(cin>>fst>>scnd){

        if(fst == 0 && scnd == 0) return 0;
        else{
            sum = fst + scnd;

            stringstream str;
            str<<sum;
            string output;
            str>>output;

            string lol(output);
            regex re("0");

            output = regex_replace(lol, re, "");
            cout<<output<<endl;
        }
    }
	return 0;
}
