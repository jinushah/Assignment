#include <stdio.h>
void rhom(int p,int q);
int main()
{
	int a,b;
	rhom(a,b);
	return 0;
}
void rhom(int p,int q)
{
	int area;
	printf("Enter Diagonals of Rhombus:\n");
	scanf("%d %d",&p,&q);
	area=p*q/2;
	printf("Area:%d",area);
}
