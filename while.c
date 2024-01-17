#include <stdio.h>
int main()
{ 
int count;
	char name[29];
	int ma ;
	int en;
	int ki;
	int ch;
	int ph;
	float total,average;
	count=1;
	 while(count<=4){
	printf("enter your name\n");
	scanf("%s",&name);
		printf("enter ma\n");
		printf("enter en\n");
		printf("enter ki\n");
		printf("enter ch\n");
		printf("enter ph\n");
	scanf("%d",&ph);
	scanf("%d",&ma);
	scanf("%d",&en);
	scanf("%d",&ki);
	scanf("%d",&ch);	
	total=ma+en+ki+ch+ph;
		printf("total=%f\n",total);
		average=total/5;
		printf("average=%f\n",average);}
				return 0;
}
