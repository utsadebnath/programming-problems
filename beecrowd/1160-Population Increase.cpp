#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,pa,pb;
    double g1,g2;
    cin>>t;
    while(t--)
    {
        cin>>pa>>pb>>g1>>g2;
        int year=0;
        while(year<=100 && pa<=pb)
        {
            pa=pa+(pa*(g1/100));
            pb=pb+(pb*(g2/100));
            year++;
        }
        if(year>100)
        {
            cout<<"Mais de 1 seculo."<<endl;
        }
        else
        {
            cout<<year<<" anos."<<endl;
        }
    }
}
    
