#include<iostream>
using namespace std;
int main()
{
    int n,i,m,c;
    cin>>n;
    int x[n];

    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    m=x[0];
    for(i=0;i<n;i++)
    {
        if(x[i]<m)
        {
            m=x[i];
            c=i;
        }
    }
    cout<<"Menor valor: "<<m<<endl;
    cout<<"Posicao: "<<c<<endl;
}
