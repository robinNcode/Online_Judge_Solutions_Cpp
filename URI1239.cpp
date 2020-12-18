#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(int argc, char ** argv){
    char str[50];
    while(gets(str)){

        int len = strlen(str);

        bool undsChange=false,astChange=false;
             for(int i=0; i<len; i++){
                 if(str[i] == '_' && undsChange==false) {
                    printf("<i>");
                    undsChange=true;
                    continue;
                 }
                 else if(str[i] == '_' && undsChange==true){
                    printf("</i>");
                    undsChange=false;
                    continue;
                 }
                 else if(str[i] == '*' && astChange==false){
                    printf("<b>");
                    astChange=true;
                    continue;
                 }
                 else if(str[i] == '*' && astChange==true){
                    printf("</b>");
                    astChange=false;
                    continue;
                 }
                 else printf("%c",str[i]);
            }
        printf("\n");
    }
    return 0;
}
