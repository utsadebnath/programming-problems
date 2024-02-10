#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,r,sum;
	cin>>a>>b>>c;
	sum=a+b+c;
	r=min(a,min(b,c));
	cout<<sum-r<<endl;
	
}
