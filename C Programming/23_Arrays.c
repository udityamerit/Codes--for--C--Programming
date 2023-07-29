#include <stdio.h>
int main()
{
      // making of the 1-D array
      int marks[4];

      for (int i = 0; i < 4; i++)
      {
            printf("Enter the value of %d element of an array: \n", i);
            scanf("%d", &marks[i]);
      }
      for (int i = 0; i < 4; i++)
      {
            //      printf("The value of %d element of the array is %d\n",i,marks[i]);
            printf("%d ", marks[i]);
      }

      // 2-D array:

      int marks[2][4] = {{23, 45, 32, 12}, {34, 67, 54, 32}};
      // [2] is represent the no of rows in the array or matrix:
      // [4] is represent the no of column in the array or matrix:

      for (int i = 0; i < 2; i++) //[This loop for the rows:]
      {
            for (int j = 0; j < 4; j++) // [This loop for the column:]
            {
                  
                  // printf("The value of %d,%d element   of the array is %d\n", i, j, marks[i][j]); // print element in the form of their value wise:

                  printf("%d ", marks[i][j]); /* print element in matrix form : like as==> 23 45 32 12
                                           34 67 54 32             */
            }
            printf("\n");
      }

      return 0;
}