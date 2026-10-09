#include <stdio.h>
#include <stdlib.h>
struct employee
{
	int id;
	float salary;
	char name[50];
};
int main()
{
	int i,n;
	struct employee *emp;
	FILE *fp;
	printf("enter the number of students:\n");
	scanf("%d", &n);

	emp=malloc(n*sizeof(struct employee));
	if(emp==NULL)
	{
	printf("memory allocation failed");
	return 1;
	}

	for(i=0;i<n;i++)
	{
	printf("enter the details of employee%d:\n",i+1);
	scanf("%d%s%f",&emp[i].id,emp[i].name,&emp[i].salary);
	}

	fp=fopen("exe.dat", "w");
	if(fp==NULL)
	{
	printf("file not available");
	}

	for(i=0;i<n;i++)
	{
	fprintf(fp, "employeeid:%d\nname:%s\nsalary:%.1f\n", emp[i].id,emp[i].name,emp[i].salary);
	}

	printf("All employee details stored successfully in emp.dat\n");

	fclose(fp);
	free(emp);
	return 0;
}
