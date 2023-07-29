#include <stdio.h>
 
int func1(int array[])
{
        for (int i = 0; i < 5; i++)
        {
                printf("The value at %d is %d\n", i, array[i]);
        }
        array[0]= 432;
        return 0;
}

void func2(int* ptr){
        for (int i = 0; i < 5; i++)
        {
                printf("The value at %d is %d\n", i, ptr[i]);
        
        }
        *(ptr+2) = 234;
}

void func3(int arr[2][2]){//if we use void function then the returen value is not use 
        for (int i = 0; i < 2; i++)
        {
                for (int j = 0; j < 2; j++)
                {
                        printf("The value at %d,%d is %d\n",i,j,arr[i][j]);
                }
                
        }
        
}
int main()
{
        int arr[] = {23, 1, 2, 3, 4}; // for  1-D array 
        int arr[2][2] = {{23, 1}, {2, 3}};// for  1-D array
        // printf("The value at 0 is %d\n",arr[0]);
          func1(arr);
        //     printf("The value at 0 is %d\n",arr[0]);
        func2(arr);
        // printf("The value at 2 is %d\n",arr[2]);
        func3(arr);
        return 0;

}