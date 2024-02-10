#include<bits/stdc++.h>
using namespace std;
int k,a,b,i;
bool flag;
int main()
{
	cin>>k>>a>>b;
	for(i=a;i<=b;i++)
	{
		if(i%k==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"OK"<<endl;
	}
	else
	{
		cout<<"NG"<<endl;
	}
}
