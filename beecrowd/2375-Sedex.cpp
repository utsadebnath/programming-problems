#include<bits/stdc++.h>
using namespace std;
int main()
{
	int dia;
	cin>>dia;
	int h,w,d;
	cin>>h>>w>>d;
	int smallest_dimension = min({h,w,d});
	if(dia<=smallest_dimension)
	{
		cout<<"S"<<endl;
	}
	else
	{
		cout<<"N"<<endl;
	}
}
