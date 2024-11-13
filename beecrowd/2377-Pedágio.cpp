#include<bits/stdc++.h>
using namespace std;
int main()
{
	int L,K,D,P;
	cin>>L>>D;
	cin>>K>>P;
	int fuel_cost= L*K;
	int num_tolls = L/D;
	int toll_cost= num_tolls*P;
	int total_cost = fuel_cost+toll_cost;
	cout<<total_cost<<endl;
}
