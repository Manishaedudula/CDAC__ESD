#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=8;j++)
		{
		if(i==1||i==7||j==1||j==8||
		(i==2&&(j<=3||j>=6))||
		(i==3&&(j<=2||j>=7))||
		(i==5&&(j<=2||j>=7))||
		(i==6&&(j<=3||j>=6)))
		{
		printf("* ");
		}
		else
		{
		printf("  ");
		}
		}
		printf("\n");
}
		return 0;
}
