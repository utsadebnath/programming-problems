#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double x= (1+sqrt(5))/2;
	double x1 = (1-sqrt(5))/2;
	double fib =  (pow(x,n)-pow(x1,n))/sqrt(5);
	cout<<fixed<<setprecision(1)<<fib<<endl;
}
