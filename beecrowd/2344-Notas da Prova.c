#include<stdio.h>
main()
{
	int m;
	scanf("%d",&m);
	if(m>=86) printf("A\n");
	else if(m>=61) printf("B\n");
	else if(m>=36) printf("C\n");
	else if(m>=1) printf("D\n");
	else printf("E\n");
	
	return 0;
}
