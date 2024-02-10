#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	int flag=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"No"<<endl;
	}
	else if(flag==0)
	{
		cout<<"Yes"<<endl;
	}
}
