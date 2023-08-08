#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     char text[500];

     scanf("%[^\n\r]", text);

     if(strlen(text) < 81)
     	printf("YES\n");
     else
     	printf("NO\n");

	 return 0;
}