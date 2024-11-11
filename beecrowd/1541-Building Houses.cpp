#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	while(true)
	{
		cin>>a>>b>>c;
		if(a==0||b==0||c==0)
		{
			break;
		}
		int house=a*b;
		int landarea=(a*b*100)/c;
		int side=sqrt(landarea);
		cout<<side<<endl;
	}
}
