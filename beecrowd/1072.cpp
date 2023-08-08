#include<iostream>
using namespace std;
 int main()
 {
     int n,x,i;
     int in=0,out=0;
     cin>> n;
     for(i=1;i<=n;i++)
     {
         cin>>x;
         if(x>=10&&x<=20)
         {
             in++;
         }
         else
         {
             out++;
         }
     }
      cout<<in<<" "<<"in"<<endl;
     cout<<out<<" "<<"out"<<endl;

 }
