#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,p,count=0;
	cin>>n>>m>>p;
	while(n>=m)
	{
		m=m+p;
		count++;
	}
	cout<<count<<endl;
}
