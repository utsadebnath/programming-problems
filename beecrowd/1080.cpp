#include<iostream>
using namespace std;
int main()
{
    int i,p,j=0;
    int a[100];
    for(i=0;i<100;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<100;i++)
    {
        if(a[i]>j)
        {
            j=a[i];
            p=i+1;
        }
    }
    cout<<j<<endl<<p<<endl;
}
