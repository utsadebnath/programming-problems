#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b)
	{
		cout<<"Takahashi"<<endl;
	}
	else if(b>a)
	{
		cout<<"Aoki"<<endl;	
	}
	else if(a==b)
	{
		if(c==1)
	{
		cout<<"Takahashi"<<endl;
	}
	else
	{
		cout<<"Aoki"<<endl;
	}	
	}
	
}
