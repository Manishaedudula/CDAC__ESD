#include <stdio.h>
int main()
{
	int i,j,num,digit,original;
	int sum,fact,temp;
	int start,end,choice;

	printf("1.number is Shakuntala Devi's number or not\n");
	printf("2.range of Shakuntala Devi's numbers\n");
	printf("3.exit\n");
	printf("enter the choice:\n");
	scanf("%d", &choice);

	switch(choice){
	case 1:
	printf("enter the number:\n");
        scanf("%d", &num);

	original=num;
	temp=num;
	sum=0;
	while(temp!=0)
	{
	digit=temp%10;
	fact=1;
	for(i=1;i<=digit;i++)
	{
		fact=fact*i;
	}
	sum=sum+fact;
	temp=temp/10;
	}
	if(original==sum)
	printf("shakuntala devi number\n");
	else
	printf("not shakuntaladevi number\n");
	break;

	case 2:
	printf("enter the numbers:\n");
	scanf("%d%d", &start,&end);

	printf("the shakuntaladevi numbers are:\n");
	for(i=start;i<=end;i++)
	{
	original=i;
	sum=0;
	temp=i;
	while(temp!=0)
	{
		fact=1;
		digit=temp%10;
		for(j=1;j<=digit;j++)
		{
		fact=fact*j;
		}
		sum=sum+fact;
		temp=temp/10;
	}
		if(original==sum)
		printf("%d\n",original);
	}
	break;

	case 3:
		printf("exit\n");
	break;

	default:
		printf("invalid choice\n");
	break;
	}

	return 0;
}





