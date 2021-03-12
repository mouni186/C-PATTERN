#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(j=5-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%c",'A'+i-1);
		}
		printf("\n");
	}
	getch();
}
