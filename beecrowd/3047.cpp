#include<iostream>
using namespace std;
int main()
{
    int m,s1,s2,s3;
    cin>>m>>s1>>s2;
    s3=m-(s1+s2);
    if(s1>=s2&&s1>=s3)
    {
        cout<<s1<<endl;
    }
    else if(s2>=s3&&s2>=s1)
    {
        cout<<s2<<endl;
    }
    else
    {
        cout<<s3<<endl;
    }
}
