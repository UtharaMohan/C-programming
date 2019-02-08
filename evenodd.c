#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	if(n<0)
	{
	printf("invalid\n");
	}
	else 
	{
	if(n%2==0)
	printf("Even\n");
	else
	printf("Odd\n");
	}
	// your code goes here
	return 0;
}
