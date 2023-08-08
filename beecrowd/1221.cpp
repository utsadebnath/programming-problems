#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x;
    bool ver=false;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>x;
      if(x==2)
      {
          cout<<"Prime"<<endl;
      }
      else
        {
            if(x%2==0)
            {
                cout<<"Not Prime"<<endl;
            }
            else
                {
                    for(j=3;j<sqrt(x);j=j+2)
                    {
                        if(x%j==0)
                            ver= true;
                    }
                    if(ver==true)
                    {
                        cout<<"Not Prime"<<endl;
                    }
                    else
                    {
                        cout<<"Prime"<<endl;
                    }
                }

        }
        ver=false;
    }
}
