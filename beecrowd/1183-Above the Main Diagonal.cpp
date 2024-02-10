#include<bits/stdc++.h>
using namespace std;
int main()
{
	double M[12][12];
	int i,j;
	double sum=0.0;
	char c;
	cin>>c;
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			cin>>M[i][j];
			if(j>i)
			{
				sum=sum+M[i][j];
			}
		}
	}
	if(c=='S')
	{
		cout<<sum<<endl;
	}
	else
	{
		cout<<sum/66.0<<endl;
	}
}
