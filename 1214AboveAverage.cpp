#include<bits/stdc++.h>
using namespace std;
int main()
{

    int test,students;
    cin>>test;

    while(test--)
    {
        cin>>students;
        int grade[students],count=0,avg=0;
        float fin=0,result=0;

        for(int i=0; i<students; i++)
        {
            cin>>grade[i];
            avg=avg+grade[i];
        }
        fin=avg/students;

        for(int i=0; i<students; i++)
        {
            if(grade[i]>fin)
                count++;
        }
        result = (count*100.00)/students;
        cout<<fixed<<setprecision(3);
        cout<<result<<"%"<<endl;
    }
    return 0;
}

