#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	int count=0;
	int a[5];
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==t)
		{
			count++;
		}
	}
	cout<<count<<endl;
}
