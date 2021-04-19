#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int num,i,ptr,cas=0;
    while(scanf("%d", &num) != EOF){
        cas++;
        int count=1;
        count += ((num*(num + 1)) / 2);
       if(num==0)cout<<"Caso "<<cas<<": "<<1<<" numero\n";
       else cout<<"Caso "<<cas<<": "<<count<<" numeros\n";
        cout<<0;
        for(i=1; i<=num; i++){
              ptr=i;
                while(ptr != 0){
                cout<<" "<<i;
                ptr--;
            }
        }
cout<<endl<<endl;
}
	return 0;
}

