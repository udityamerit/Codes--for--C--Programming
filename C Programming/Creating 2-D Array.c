#include<stdio.h>
int main()
{
     
     // 2-D array:

      int marks[2][4] = {{23, 45, 32, 12}, {34, 67, 54, 32}};
      // [2] is represent the no of rows in the array or matrix:
      // [4] is represent the no of column in the array or matrix:

      for (int i = 0; i < 2; i++) //[This loop for the rows:]
      {
            for (int j = 0; j < 4; j++) // [This loop for the column:]
            {
                  printf("The value of %d,%d element  of the array is %d\n", i, j, marks[i][j]); // print element in the form of their value wise: 

                  printf("%d ", marks[i][j]); /* print element in matrix form : like as==> 23 45 32 12
                                                                                           34 67 54 32             */
            }

            printf("\n");
            
      }

      return 0;
}