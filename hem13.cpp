#include<stdio.h>
int main()
{
	char a;
	
	printf("Enter a value :");
	scanf("%c", &a);
	if(a>=33 && a<=47)
	{
		printf("special character");
	}
	else if(a>=58 && a<=64)
	{
		printf("special character");
	}
	else if(a>=65 && a<=90)
	{
		printf("alphavet");
	}
	else if(a>=99 && a<=122)
	{
		printf("alphavet");
	}
	else
	{
		printf("unvalid");
	}
	return 0;
}
