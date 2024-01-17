#include<stdio.h>
float max(int num1,int num2)
{
	int result;
	if (num1>num2)
	{
		result=num1;
	}
	else
	{
		result=num2;
	}
	return result;
}
int main()
{
float num1,num2,answer;
printf("enter num1,num2\n");
scanf("%f%f",&num1,&num2);
answer=max(num1,num2);
printf("maximum is:%f",answer);
return 0;

}
