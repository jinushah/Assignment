#include<stdio.h>

void swap(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("x is %d\n y is %d",x,y);
}

int main()
{
	int a,b;
	printf("Enter Numbers:\n");
	scanf("%d %d",&a,&b);
	swap(a,b);
	return 0;	
}

