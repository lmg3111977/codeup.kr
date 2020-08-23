#include<stdio.h>

int main()
{
	char a;

	scanf("%c", &a);
	for (char b='a';b<=a;b++)
		printf("%c\n", b);
	return 0;
}

