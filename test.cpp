//Rehena Akther Riyana
//CSE1901016036
#include <iostream>
#include<string>
using namespace std;
int main()
{
    int siz,i,j,k;

    cout<<"Enter the size of array:"<<endl;
    cin>>siz;

    string arr[siz],riya;

    for(i=0; i<siz; i++)
    {
        cout<<"Enter the "<<i+1<<" number students id : ";
        cin>>arr[i];
    }

    for(i=0; i<=siz; i++)
    {
        for(j=i+1; j<siz; j++)
        {
            if (arr[i]>arr[j])
        {
                riya=arr[i];
                arr[i]=arr[j];
                arr[j]=riya;
            }
        }
    }

    cout<<"\t<<<  After Sorting all ID  >>>\n";
    for(i=0; i<siz; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
