#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ios> //used to get stream size
#include<limits>//to get numeric limits
using namespace std;
int main()
{
    int test,i,count=0;
    int sum=0,div;
    cin>>test;
    string str;

    for(i=0; i<test; i++)
    {
        //cin.ignore(numeric_limits<streamsize>::max(),'\n');//Clear Buffer before line
        cin.getline(str,0);
            cout<<str<<endl;
        		int n = str.length();
                sum=n;
                div=n/2;
    	// declaring character array
    	char char_array[n + 1];

    	// copying the contents of the string to char array
    	strcpy(char_array, str.c_str());

  		int newdec[n];
        cout<<"After shifting 3 to right\n";
    	for (int i=0;i<n; i++) {
            newdec[i]=(int)char_array[i];
            if(newdec[i]>=65 && newdec[i]<=90  || newdec[i]>=97 && newdec[i]<=122){
                newdec[i]=newdec[i]+3;
                cout<<char_array[i]<<" "<<(char)newdec[i]<<endl;
            }
                else
                cout<<char_array[i]<<" "<<(char)newdec[i]<<endl;
                //cout<<"char = "<<char_array[i]<<" int = "<<newdec[i]<<endl;

    	}

    	int newdec2[n];
    	cout<<"After reverse\n";
    	for(int i=n-1; i>=div; i--){
            cout<<(char)newdec[i]<<endl;

            //newdec2[i]=newdec[i];
    	}
    	for(int i=div-1; i>=0; i--){
            newdec2[i]=newdec[i]-1;
            cout<<(char)newdec2[i]<<endl;
            //newdec2[i]=newdec[i];
    	}

          /*  cout<<"Final\n";
            cout<<"Sum = "<<sum<<endl;
            cout<<"Div = "<<div<<endl;
    for(int i=0; i<=div; i++){
                newdec2[i]=newdec2[i]-1;
                cout<<" i "<<i<<char_array[i]<<" "<<(char)newdec2[i]<<endl;
            }
     for(int i=div; i<sum; i++){
                newdec2[i]=newdec2[i]-1;
                cout<<" i "<<i<<char_array[i]<<" "<<(char)newdec2[i]<<endl;
            }*/
    }
    return 0;
}

