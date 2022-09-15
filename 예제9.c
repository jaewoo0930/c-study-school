#include <stdio.h>
main()
{
	int i,dan;
	printf("´Ü ");
	scanf("%d",&dan);
	printf("**%d**\n",dan);
	for(i=1;i<=9;i++)
	{
		printf("%d X %d = %d\n",dan,i,dan*i);
	}
}
