#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t;
	double a,sq,cir,res;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>a;
		sq=(a*2)*(a*2);
		cir= 2*acos(0.0)*a*a;
		res=sq-cir;
		cout<<fixed<<setprecision(2)<<"Case "<<i<<": "<<res<<endl;
	}
}

