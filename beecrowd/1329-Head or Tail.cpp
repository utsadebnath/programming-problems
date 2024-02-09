#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int marry=0,john=0,i,t,n;
    cin>>t;
    while(t!=0)
    {
        marry=0;
        john=0;
        
        for(i=0;i<t;i++)
        {
            cin>>n;
            if (n==0)
            {
                marry++;
            }
            else
            {
                john++;
            }
            
            
        }
        cout<<"Mary won "<<marry<<" times and John won "<<john<<" times"<<endl;
        cin>>t;

    }
    return 0;
}
