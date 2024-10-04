#include<stdio.h>
int main()
{
	char a;
	printf("enter any charecter");
	scanf("%c", &a);
	if(a>=65 && a<=90)
	{
		printf("charater is not alphavet");
	}
	else if(a>=97 && a<=112)
	{
		printf("character is  alphavet");
	}
	else
	{
		printf("unvalid value");
	}
	return 0;
}
