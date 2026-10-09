#include <stdio.h>
int main()
{
	int i,j;

	for(i=1;i<=4;i++)
	{
		for(j=1;j<=9;j++)
		{
		if(i==1&&j==5)
		printf("1 ");
		else if(i==2&&(j==4||j==6))
		printf("1 ");
		else if(i==3&&(j==3||j==7))
		printf("1 ");
		else if(i==3&&j==5)
		printf("2 ");
		else if(i==4&&(j==2||j==8))
		printf("1 ");
		else if(i==4&&(j==4||j==6))
		printf("3 ");
		else
		printf("  ");
		}
		printf("\n");
	}

	return 0;
}
