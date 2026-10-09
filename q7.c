#include <stdio.h>
#include <string.h>
int main(int argc, char*argv[])
{
	int i,j;
	int n=strlen(argv[1]);

	for(i=0;i<n;i++)
	{
	printf("%c ",argv[1][i]);
	}
	printf("\n");

	for(i=1;i<n-1;i++)
	{
	printf("%c",argv[1][i]);

	for(j=1;j<=11;j++)
	printf(" ");

	printf("%c\n", argv[1][n-i-1]);
	}

	for(i=n-1;i>=0;i--)
	printf("%c ", argv[1][i]);
	printf("\n");

	return 0;
}
