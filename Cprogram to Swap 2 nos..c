#include<stdio.h>
int main()
{ 
  int x=13,y=22;
  printf("Before Swapping\n%d\n%d",x,y);
  x=x+y;
  y=x-y;
  x=x-y;
  printf("\nAfter Swapping\n%d\n%d",x,y);
  return 0;
  }
