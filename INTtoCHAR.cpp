#include <stdio.h>
#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int digi = 5;
	string buf = "";
	char str[10];
	buf += itoa(digi, str, 10);
	
	cout<<buf<<endl;
	//way 2
	char lol=digi+'0';
}
