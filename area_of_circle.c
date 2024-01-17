#include<stdio.h>
float circlearea(float radius)
{
	float area;
	float pi=3.14;
	area=pi*radius*radius;
	return area;}
int main()
{
	float radius,area;
	printf("enter radius\t");
	scanf("%f",&radius);
	area=circlearea(radius);
	printf("area is %f",area);
	return 0;
}
