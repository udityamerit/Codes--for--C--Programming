#include <stdio.h>
int main()
{
      // making of the 1-D array 
      // ------------------------one dimentional array is called ==> VECTOR <== ---------------------------------
      // ------------------------two dimentional array is called ==> MATRIX <== ---------------------------------
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
                  
                  // printf("The value of %d,%d element   of the array is %d\n", i, j, marks[i][j]);
                   // print element in the form of their value wise:

                  printf("%d ", marks[i][j]); /* print element in matrix form : like as==> 23 45 32 12
                                           34 67 54 32             */
            }
            printf("\n");
      }

      return 0;
}

#include<stdio.h>
// finding the  how many number of odd and
// even numbers present in an array:
int main(){
        int a[10],i;
        int even = 0;
        int odd = 0;
        for ( i = 0; i < 10; i++)
        {
                printf("Enter the element of the array: ");
                scanf("%d",&a[i]);
        }
        printf("-----------------\n");
        
        for ( i = 0; i < 10 ; i++)
        {
                if (a[i] % 2 == 0)
                {
                        even = even + 1;
                }
                else{
                        odd = odd + 1;
                }
        
                
        }
        printf("Array is = ");
        for (int i = 0; i < 10; i++)
      {
            printf("%d ", a[i]);
      }
        
        printf("\n-------------------\n ");
        printf("Number of Even number present in array is: %d\n ",even);
        printf("Number of Odd number present in array is: %d\n ",odd);
        return 0;
}
