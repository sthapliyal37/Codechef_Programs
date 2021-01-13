#include<stdio.h>
#include<string.h>
int checkPalindrome(char *str)
{
	int n=strlen(str);
	for(int i=0,j=n-1;i<n/2 && j>=n/2;j--,i++)
	{
			if(str[i]!=str[j])
				return 0;
	}
	return 1;
}
int  main()
{
	char str[1000];
	gets(str);
	int x=checkPalindrome(&str);
	if(x)
		print("\nPalindrome\n");
	else
		printf("\nNot Palindrome\n");
	
	return 0;
}

