#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    string strWords[50];
    short counter = 0;
    int len= str.length();
    cout<<len<<endl;
    for(short i=0; i<str.length(); i++)
    {

        strWords[counter] = str[i];
        if(str[i] == ' ')
        {
            counter++;
        }
        cout<<strWords[counter]<<endl;
    }

    return 0;
}
