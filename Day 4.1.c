#include <stdio.h>

int main(void) 
{
   int number ;
   scanf("%d",&number);
   while(number!=1)
   {
   	if(number%2==0)
   		number=number/2;
   	else
   	{
   		printf("it is not power of 2 ");
   		return 0;
   	}
   		
   }
   printf("it is power of 2");
	return 0;
}
