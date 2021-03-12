#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<5;j++)
		{
			printf(" ");
}
		for(j=1;j<=i;j++)
		{
			printf("*",j);
		}
		printf("\n");
		}
		getch();
}
