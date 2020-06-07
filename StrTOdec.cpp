#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

	char str[20];
	printf("Enter anything:");
	scanf("%s",str);
	for(int i = 0; i<strlen(str); i++)
	{
      	printf("%d\n",(int)str[i]);
	}
	return 0;
	
}
