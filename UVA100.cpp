#include<iostream>
#include<stdio.h>
using namespace std;
int lol=0;
int cycleLength(int i){
    int j=i,counter=1;
            while (j > 1){
                if(j%2 == 0) {
                        j = j/2;
                        counter ++;
                }
                else{
                    j = (j*3) + 1;
                    counter++;
                }
                if (j==1) break;
            }
            if(counter>=lol) lol = counter;
            return lol;
}
//function for checking each an every value between a to b
int loop(int a,int b){
    for (int i=a; i<=b; i++)
        lol = cycleLength(i) ;
    return lol;
}

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF){
        if(a>b){
                int temp;
            //swapping b to a
            temp = b;
            b = a;
            a = temp;
            lol = loop(a,b);//calling loop function
            printf("%d %d %d\n",b,a,lol);
        }
        else{
            lol = loop(a,b) ;//calling loop function
            printf("%d %d %d\n",a,b,lol);
            }
            lol = 0;
    }
	return 0;
}
