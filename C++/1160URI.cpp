#include<bits/stdc++.h>
using namespace std;
int main(){

    double growthA,growthB;
    long long pa,pb,test;
    cin>>test;

    while(test--){
        int years=0,count=0;
        cin>>pa>>pb>>growthA>>growthB;

            while (pa <= pb)
            {
                pa += pa * growthA/100;
                pb += pb * growthB/100;

                years++;
                if(years > 100)
                {
                    count = 1;
                    break;
                }
            }
             if(count == 0) cout<<years<<" anos.\n";
             else cout<<"Mais de 1 seculo.\n";

        }
    return 0;
}
