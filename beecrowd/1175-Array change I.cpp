#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n[20];
    int i;
    for (i = 0; i  <  20; i++)
	{
        scanf("%d", &n[i]);
    }
    for (i = 0; i  <  20; i++)
	{
        printf("N[%d] = %d\n", i, n[19 - i]);
    }
}
