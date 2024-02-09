#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int N[61];
	int i,t,n;
	N[0]=0;
	N[1]=1;
	for(i=2;i<61;i++)
	{
		N[i]=N[i-1]+N[i-2];
	}
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		cout<<"Fib("<<n<<") = "<<N[n]<<endl;
	}
	
}
