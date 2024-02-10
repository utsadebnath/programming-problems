#include<bits/stdc++.h>
using namespace std;
int main()
{
	int dis,time,speed;
	cin>>dis>>time>>speed;
	int r=time*speed;
	if(dis>r)
	{
		cout<<"No"<<endl;
	}
	else
	{
		cout<<"Yes"<<endl;
	}
}
