#include <stdio.h>
#include <stdio_ext.h>
int main()
{
	int num,digit,original,temp,sum=0;
	int start,end,i;
	char choice;
	while(1)
	{
	printf("a.number is Armstrong number or not\n");
	printf("b.range of Armstrong numbers\n");
	printf("c.exit\n");

	printf("Enter the choice:\n");
	__fpurge(stdin);
	scanf("%c", &choice);

	switch(choice){

	case 'a':
		printf("Enter the number:\n");
		scanf("%d", &num);
		original=num;
		temp=num;
		sum=0;

		while(temp!=0)
			{
			digit = temp%10;
			sum = sum+digit*digit*digit;
			temp = temp/10;
			}
			if(original==sum)
			printf("armstorng number\n");
			else
			printf("not an armstrong number\n");
		break;

	case 'b':
		printf("Enter the numbers:\n");
        	scanf("%d%d", &start,&end);

		printf("armstrong numbers are:\n");
		for(i=start;i<=end;i++)
		{
			original=i;
			temp=i;
			sum=0;
			while(temp!=0)
			{
			digit=temp%10;
			sum=sum+digit*digit*digit;
			temp=temp/10;
			}
		if(original==sum)
                printf("%d\n", original);
		}
		printf("\n");
		break;

	case 'c':

		printf("exit\n");
		break;

	default:
		printf("invalid choice\n");
		break;
	}
	}
	return 0;
}
