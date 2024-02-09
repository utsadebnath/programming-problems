#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int l,r,nb;
    double PI = 3.1415;
    scanf("%d %d",&r,&l);
        nb= l/((4*PI*r*r*r)/3);
        
        printf("%d\n",nb);
    return 0;
}
