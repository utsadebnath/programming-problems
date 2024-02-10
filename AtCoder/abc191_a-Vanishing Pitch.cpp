#include<bits/stdc++.h>
using namespace std;
int main()
{
	int v,t,s,d;
	cin>>v>>t>>s>>d;
	t=v*t;
	s=v*s;
	if(t<=d and d<=s)
		{
			cout<<"No"<<endl;
		}
	else
		{
			cout<<"Yes"<<endl;
		}
	
}
