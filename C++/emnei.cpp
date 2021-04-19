#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
            char str[200];
            int index,alpha=0,digit=0,space=0,special=0;
            fputs("Enter string:",stdout);
            scanf("%[^\n]%*c", str);
            //getchar();

            int len = strlen(str);
            for(index=0; index<len; index++){
                if(isalpha(str[index])){
                    printf("I Am alpha \n");
                    alpha++;
                }
                else if(isdigit(str[index])){
                    printf("I Am digit \n");
                    digit++;
                }
                else if(isspace(str[index])){
                    printf("I Am space \n");
                    space++;
                }
                else special++;
                //index ++;
            }

            puts(str);
            printf("Index = %d\n",index);
            printf("Alpha Char = %d\n",alpha);
            printf("Digit = %d\n",digit);
            printf("Space = %d\n",space);
            printf("Special = %d\n",special);

            return 0;
}
