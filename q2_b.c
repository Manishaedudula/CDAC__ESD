 #include <stdio.h>
int main()
{
	int i,j,temp,num;
	printf("Enter the num:\n");
	scanf("%d", &num);

	for(i=1;i<=num;i++)
	{
		for(j=1;j<=4-i;j++)
		{
		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		printf("* ");
		}
		printf("\n");
	}

	for(i=2;i<=num;i++)
	{
		for(j=1;j<i;j++)
		{
		printf(" ");
		}
		for(j=1;j<=5-i;j++)
		{
		printf("* ");
		}
		printf("\n");
	}

	return 0;
}
