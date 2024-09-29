#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X, N, a,b=0;
    cin>>X>>N;
    while(N<=0)
        cin>>N;
    for(a=1; a<=N; a++)
    {
        b+=X;
        X++;
    }
    cout<<b<<endl;
    return 0;
}
