#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int div[7]={1000,500,100,50,10,5,1};
    string str,lol[7]={"M","D","C","L","X","V","I"};
    cin>>num;

        int ptr=0,remain=0;
        for(int i=0; i<7; i++){
            ptr = num/div[i];
            remain=ptr;
            while(ptr!=0){
                str+=lol[i];
                ptr--;
            }
            num = num-(remain*div[i]);
        }
        cout<<str<<endl;
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

string a[10] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
string b[10] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
string c[10] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
int n;

int main(){
	scanf("%d",&n);
	string result = a[n/100] + b[(n%100)/10] + c[n%10];
	cout << result << endl;
	return 0;
}
*/
