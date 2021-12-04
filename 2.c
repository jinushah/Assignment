#include<stdio.h>

int add_contact();
int update();
int exit_ex();
int you();

int main()
{
	int choice;
	
	while(1)
	{
		printf("1.Add Contact\n");
		printf("2.Update Contact Number\n");
		printf("3.Exit\n");
		printf("Enter your choice:\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				add_contact();
				break;
			case 2:
				update();
				break;
			case 3:
				exit_ex();
				break;
			default :
				printf("Wrong Input");
				break;
		}
	}
}
int add_contact()
{
	int con,i=0;
	printf("Enter the Contact Number");
	scanf("%d", &con);
	while (con!=0)
	{
		con=con/10;
		i++;
		if(con==0 && i<10 && i>0)
		{
			i++;
			continue;		
		}
	}
	if(i==10)
	{
		printf("Number is Successfully Added\n");
	}
	else if(i<10 || i>10)
	{
		printf("Enter Proper Number\n");
	}
}
int update()
{
	int up,k;
	printf("Add Update Contact Number:");
	scanf("%d",&up);
	while (up!=0)
	{
		up=up/10;
		k++;
		if(up==0 && k<10)
		{
			k++;
			continue;		
		}
	}
	if(k==10)
	{
		printf("Contact Number is Updated successfilly\n");
	}
	else if(k<10 || k>10)
	{
		printf("Enter Proper Number:\n");
	}
}

int exit_ex()
{
	return 0;
}

