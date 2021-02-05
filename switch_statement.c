#include<stdio.h>
int main()
{
  int choice;
  printf("Enter your choice for Food item between (1-5):");
  scanf("%d",&choice);
  switch(choice)
  {
  	 case 1:printf("\nFood item-Sandwich\nPrice-149");
		    break;
     case 2:printf("\nFood item-Burger\nPrice-129");
            break;
     case 3:printf("\nFood item-Pasta\nPrice-179");
            break;
     case 4:printf("\nFood item-French Fries\nPrice-99");
            break;
     case 5:printf("\nFood item-Pizza\nPrice-239");
            break;
     default:printf("\nWrong choice");
	}
	return 0;
}
