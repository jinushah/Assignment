#include <stdio.h>
void arat(int a,int b);
int main()
{
	int x,y;
	arat(x,y);
	return 0;
}
void arat(int a,int b)
{
	int area;
	printf("Enter Value of A:\n");
	scanf("%d",&a);
	printf("Enter Value of B:\n");
	scanf("%d",&b);
	area=a*b/2;
	printf("Area:%d",area);
}
