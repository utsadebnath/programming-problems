#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num, hours;
    float amount, salary;
    scanf("%d %d %f",&num,&hours,&amount);
    salary= hours*amount;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %0.2f\n",salary);
    return 0;
}
