#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,Sum=0;
	int **a;
	a = (int **) malloc(3* sizeof(int *));
	for( i=0; i<3; i++)
	{
		a[i] = (int *) malloc(3* sizeof(int));
	}
	
  
       printf("\n\nRead a 2D array of size 3x3 and print the matrix :\n");
       printf("------------------------------------------------------\n");  
       printf("Input elements in the matrix :\n");
           for(i=0;i<3;i++)
            {
               for(j=0;j<3;j++)
                {
	               printf("element - [%d],[%d] : ",i,j);
	               scanf("%d",&a[i][j]);
                }
            } 
	printf("Matrix elements are: \n");
	for(i=0; i<3; i++)
	{
		for( j=0; j<3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<3; i++)
	{
		free(a[i]);
	}
	free(a);
	for(i= 0; i< 3; i++)
  	{
  		for(j=0;j<3;j++)
  		{
  			 if(i==j)
  
   	    Sum= Sum + a[i][i];
       }
  	}
 
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum);
	return 0;
}
