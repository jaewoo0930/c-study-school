#include <stdio.h>
main()
{
	int n1,n2,i;
	printf("������� ���� �� ������ �Է� :");
	scanf("%d %d",&n1,&n2);
	
	for(i=1;i <= 100;i++)
		if(i % n1 == 0 && i % n2 == 0)
			printf("%d",i);
}
