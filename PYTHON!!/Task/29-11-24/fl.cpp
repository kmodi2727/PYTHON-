#include <stdio.h>
int main()
{
	float number;
	printf("ENTER YOUR NUMBER : ");
	scanf("%f",&number);
	if (number == (int)number)	
	{
		printf("your number is not in decimal");
	}
	else 
	{
		printf("your number is in decimal");
	}
	
	return 0;
}
