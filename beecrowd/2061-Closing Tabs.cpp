#include<iostream>
using namespace std;
int main()
{
    string str;
    int m,n,i;
    cin>>m>>n;
    for(i=1;i<=n;i++)
    {
       cin>>str;
       if(str=="fechou")
            m++;
       else
        m--;
    }
    cout<<m<<endl;

}
