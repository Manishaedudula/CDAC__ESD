#include <stdio.h>
#include <string.h>
int main()
{
	char str1[50],str2[50];
	int i,j,flag=1;
	char choice;
	printf("a. Reverse a string\n");
	printf("b. Check if string is palindrome\n");
	printf("c. Compare two strings\n");
	printf("d. String copy\n");
	printf("e. String-tokenizer\n");
	printf("f. String Concatenate\n");

	printf("enter the choice:\n");
	scanf("%c", &choice);

	switch(choice){
	case 'a':
	printf("enter the string:\n");
	scanf("%s",str1);
	for(i=strlen(str1)-1;i>=0;i--)
	{
	printf("%c", str1[i]);
	}
	break;

	case 'b':
	printf("enter the string:\n");
	scanf("%s", str1);
	i=0;
	j=strlen(str1)-1;
	while(i<j)
	{
	if(str1[i]!=str1[j])
	{
	flag=0;
	break;
	}
	i++;
	j--;
	}
	if(flag==1)
	printf("palindrome");
	else
	printf("not an palindrome");
	break;

	case 'c':
	printf("enter the strings:\n");
	scanf("%s%s", str1,str2);
	if(strcmp(str1,str2)==0)
	printf("both are equal\n");
	else
	printf("both are not equal\n");
	break;

	case 'd':
	printf("enter the string\n");
	scanf("%s", str1);
	strcpy(str2, str1);
	printf("%s", str2);
	break;

	case 'e':
	printf("enter the string\n");
	scanf(" %[^\n]", str1);
	char *token=strtok(str1, " ");
	while(token!=NULL)
	{
	printf("%s\n",token);
	token=strtok(NULL, " ");
	}
	break;

	case 'f':
	printf("enter the strings\n");
	scanf("%s%s", str1,str2);
	strcat(str1, str2);
	printf("%s", str1);
	break;

	default:
		printf("invalid choice\n");
	break;
	}

	return 0;
}

