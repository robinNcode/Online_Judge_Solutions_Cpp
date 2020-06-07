#include<iostream>
#include<string>
using namespace std;
int main()
{
    int size;
    while(cin>>size)
    {
        string str[size];
        int length[size];
        int space=0,flag=0;

        if(size==0)
            break;
        if(flag==1)
            cout<<endl;
        else{
                int large=0;
        for(int i=0; i<size; i++)
        {
            cin>>str[i];
            length[i]=str[i].length();
            if(length[i]>large)
                large=length[i];
        }
        //cout<<large<<endl;
        for(int i=0; i<size; i++)
        {
            if(length[i]<large)
            {
                space=large-length[i];
                for(int j=0; j<space; j++)
                {
                    cout<<" ";
                }
                cout<<str[i]<<endl;
            }
            else
                cout<<str[i]<<endl;
            }
        }
        flag=1;
    }
    return 0;
}

