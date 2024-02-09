#include<iostream>
using namespace std;
int main()
{
    int i,sum,n;
    while(1)
    {
        sum=0;
        cin>>n;
        if (n==0)
            break;
        if(n%2!=0)
            n++;
        for(i=0;i<5;i++)
           {
               sum=sum+n;
            n=n+2;
           }
        cout<<sum;
        cout<<endl;

    }
}
