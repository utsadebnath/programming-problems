#include <stdio.h>
int main()
{
	int X;
	float Y,Z;
	scanf("%d %f",&X,&Y);
	Z = X/Y;
	printf("%.3lf km/l\n",Z);
	return 0;
}