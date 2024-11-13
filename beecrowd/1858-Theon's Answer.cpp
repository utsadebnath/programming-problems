#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int min_index=1;
	for(i=1;i<=n;i++)
	{
		if(arr[i]<arr[min_index])
		{
			min_index=i;
		}
	}
	cout<<min_index<<endl;
}
