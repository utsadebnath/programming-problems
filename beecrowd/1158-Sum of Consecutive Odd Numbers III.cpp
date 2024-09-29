#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,x,y;
	int sum;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>x>>y;
		if(x%2==0)
		{
			x++;
			sum=0;
			for(j=1;j<=y;j++)
			{
				sum=sum+x;
				x=x+2;
			}
			cout<<sum<<endl;
		}
		else
		{
			sum=0;
			for(j=1;j<=y;j++)
			{
				sum=sum+x;
				x=x+2;
			}	
			cout<<sum<<endl;
		}
	}
}
