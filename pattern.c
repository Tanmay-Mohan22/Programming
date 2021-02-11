#include <stdio.h>
int main()
{
   int i, j;
   printf("Your Pattern-:\n");
   for (i = 1; i <=6; ++i) 
   {
      for (j = 1; j <=i*2; ++j)
	   {
         if(j%2==0)
         {
         	printf("A");
		 }
		 else
		 {
		    printf("a");
		 }
      }
      printf("\n");
   }
   return 0;
}

