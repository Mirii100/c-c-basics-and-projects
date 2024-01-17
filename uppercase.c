#include <stdio.h>
#include<string.h>
int main()
{
	char name[10];
	printf("enter your name\n");
	scanf("%s",&name);
	printf("upper case is: %s\n",strupr(name));
	return 0;
}
