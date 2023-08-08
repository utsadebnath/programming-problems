#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%i",&a);
    printf("VOLUME = %.3lf\n",(4*3.14159*pow(a,3))/3);
    return 0;
}
