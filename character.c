#include <stdio.h>
#include<string.h>
int main()
{
	char word[10];
	int x;
	printf("enter a word\n");
	scanf("%s",&word);
	x=strlen(word);
	printf("string length is %d\n",x);
	return 0;
}
