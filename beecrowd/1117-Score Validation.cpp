#include<iostream>
using namespace std;
int main()
{
    int i,j=0;
    float avg ,n,a,b,ar[2];
    for(i=0;i<50;i++)
    {
        cin>>n;
        if(n>=0 && n<=10)
        {
            ar[j]=n;
            j++;
        }
        else
            cout<<"nota invalida"<<endl;
        if(j>1)
            break;
    }
    avg=(ar[0]+ar[1])/2;
     printf("media = %.2f\n", avg);
}
