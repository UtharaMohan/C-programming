#include <stdio.h>

int main(void) {
	int n,k,i,sum=0;
	int a[100];
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
	    scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("%d",sum);
	// your code goes here
	return 0;
}
