#include<stdio.h>
int main()
{
   int marks;
   printf("\nEnter the Marks-:");
   scanf("%d",&marks);
    if (marks==100 && marks>=85)
    {
        printf("Grade A");
    }
    else if (marks<=84 && marks>=70)
    {
        printf("Grade B");
    }
    else if (marks<=69 && marks>=55)
    {
        printf("Grade C");
    }
    else if (marks<=54 && marks>=40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
