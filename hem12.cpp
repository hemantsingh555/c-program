#include<stdio.h>
int main()
{
	char a;
	printf("Enter the charcter :");
	scanf("%c", &a);
	if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
	{
		printf("this character is vowel");
	}
	else
	{
		printf("this is not vowel");
	}
	return 0;
}
