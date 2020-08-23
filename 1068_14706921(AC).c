#include <stdio.h>

int main()
{
    int a, b,c;
    scanf("%d", &a);
  
	if(a<40)
		printf("D");
	else if(a<70)
		printf("C");
	else if(a<90)
		printf("B");
	else
		printf("A");
	
    return 0;
}

