#include <stdio.h>
#include <stdlib.h>
struct student
{
	int id;
	char name[20];
	float percentage;
};
	int main()
	{
	int n,i;
	struct student *s;
	printf("enter the number of student:\n");
	scanf("%d",&n);

	s=malloc(n*sizeof(struct student));
	if(s==NULL)
	printf("failed\n");

	for(i=1;i<=n;i++)
	{
	printf("enter the details of the student%d\n",i);
	//printf("details of student:id,name,percentage");
	scanf("%d%s%f", &s[i].id, s[i].name, &s[i].percentage);
	}

	for(i=1;i<=n;i++)
	{
	printf("details of student%d:\n",i);
	printf("%d\t%s\t%f\n", s[i].id,s[i].name,s[i].percentage);
	}

	free(s);
	s=NULL;
	}
