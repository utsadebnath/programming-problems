
#include<stdio.h>

int main()
{
  int amount,one_h,fifty,twenty, ten, five, two, one;

  scanf("%d",&amount);

  one_h = amount/100;
  fifty = (amount%100)/50;
  twenty = ((amount%100)%50)/20;
  ten = (((amount%100)%50)%20)/10;
  five = ((((amount%100)%50)%20)%10)/5;
  two = (((((amount%100)%50)%20)%10)%5)/2;
  one = (((((amount%100)%50)%20)%10)%5)%2;

  printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n",amount,one_h,fifty);
         printf("%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n",twenty,ten,five);
         printf("%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", two, one);

   return 0;
}

