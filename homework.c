#include<stdio.h>
int add(int DISRETE  ,int PROGRAMING ,int INTRODUCTION  ,int NUMERIC_ALGEBRA,int HIVandAIDS,int WEB_DEVELOPMENT )
{
	int total_marks ;
	total_marks=DISRETE+PROGRAMING+INTRODUCTION+NUMERIC_ALGEBRA+HIVandAIDS+WEB_DEVELOPMENT;
	
	return total_marks/6;
}
int main()
{
	
	int i;
	for(i=1;i<=60;i++)
	{char name[15];
	printf("enter name of comrade\n");
	scanf("%s",&name);
	int DISRETE;
int PROGRAMING;
int INTRODUCTION ;
int NUMERIC_ALGEBRA;
int HIVandAIDS;
int WEB_DEVELOPMENT ;
printf("enter score for:DICRETE\n");
printf("enter score for:PROGRAMING\n");
printf("enter score for:INTRODUCTION \n");
printf("enter score for:NUMERIC_ALGEBRA\n");
printf("enter score for:HIVandAIDS\n");
printf("enter score for:WEB_DEVELOPMENT\n");
scanf("%d",&DISRETE);
scanf("%d",&PROGRAMING);
scanf("%d",&INTRODUCTION);
scanf("%d",&NUMERIC_ALGEBRA);
scanf("%d",&HIVandAIDS);
scanf("%d",&WEB_DEVELOPMENT);
int add(int DISRETE  ,int PROGRAMING ,int INTRODUCTION  ,int NUMERIC_ALGEBRA,int HIVandAIDS,int WEB_DEVELOPMENT );
int total_marks=add(DISRETE  ,PROGRAMING ,INTRODUCTION  ,NUMERIC_ALGEBRA,HIVandAIDS,WEB_DEVELOPMENT );
 total_marks=DISRETE+PROGRAMING+INTRODUCTION+NUMERIC_ALGEBRA+HIVandAIDS+WEB_DEVELOPMENT;
int average;
average=total_marks/6;
if(average>=60){

	printf("average is:%d\n",average);
		printf("FIRST CLASS HONOR\n");
		printf("GRADE:A\n");
	}
else if(average>=50)
	{

		printf("average is:%d\n",average);
		printf("SECOND UPPER CLASS HONNOR\n");
		printf("GRADE:B\n");
	}
	else if(average>=40)
	{
		
		printf("average is:%d\n",average);
			printf("PASS\n");
			printf("GRADE:c\n");
	}
	else
	{
		printf("fail\n");
		printf("GRADE:E\n");}
	}	
	return 0;
}
