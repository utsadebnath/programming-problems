#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,n,n1,n2;
   char c;
   cin>>n;
   for(i=0;i<n;i++)
   {
        cin>>n1>>c>>n2;
        if(n1==n2)
        {
            cout<<n1*n2<<endl;
        }
        else if(c>=65 && c<=90)
        {
            cout<<n2-n1<<endl;
        }
        else
        {
            cout<<n1+n2<<endl;
        }
   }
}

