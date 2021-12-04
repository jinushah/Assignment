#include <stdio.h>
void para(int b,int h);
int main()
{
	int x,y;
	para(x,y);
	return 0;
}
void para(int b,int h)
{
	int area;
	printf("Enter base:\n");
	scanf("%d",&b);
	printf("Enter Height:\n");
	scanf("%d",&h);
	area=b*h;
	printf("Area:%d",area);
}
