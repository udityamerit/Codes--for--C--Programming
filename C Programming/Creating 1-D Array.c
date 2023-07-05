#include <stdio.h>
int main()
{
      // making of the 1-D array
      int marks[ 4];

      for (int i = 0; i < 4; i++)
      {
            printf("Enter the value of %d element of the array \n",i);
            scanf("%d",&marks[i]);
      }
      for ( int i = 0; i < 4; i++)
      {
           printf("The value of %d element of the array is %d\n",i,marks[i]);
      }

      return 0;

}