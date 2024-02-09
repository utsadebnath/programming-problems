#include<stdio.h>
int main()
{
    float A,B,C,AT,PT;
    scanf("%f %f %f",&A,&B,&C);
    if((A<(float)(B+C))&&(B<(float)(A+C))&&(C<(float)(B+A)))
    {
        PT = A+B+C;
        printf("Perimetro = %.1f\n",PT);
    }
    else
    {
        AT = ((A+B)*C)/2;
        printf("Area = %.1f\n",AT);
    }
    return 0;
}
