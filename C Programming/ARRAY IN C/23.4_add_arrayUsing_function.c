#include<stdio.h>

// SUM TO ARRAYS USING FUNCTIONS:

void func1 (int arr1[5]){
        for (int i = 0; i < 5; i++)
        {
                printf("Enter the element of index at %d an array is :",i);
                scanf("%d",&arr1[i]);
        }
        printf("Your first array is : ");
         for (int i = 0; i < 5; i++)
        {
            
            printf("%d ", arr1[i]);
        }
        printf("\n");
        
}

void func2 (int arr2[5]){
        for (int i = 0; i < 5; i++)
        {
                printf("Enter the element of index at %d an array is: ",i);
                scanf("%d",&arr2[i]);
        }
        printf("Your second array is : ");
         for (int i = 0; i < 5; i++)
        {
            
            printf("%d ", arr2[i]);
            
        }
        printf("\n");
}

void sum(int arr3[5], int arr1[5], int arr2[5]){

         printf("sum of two array is : ");

         for (int i = 0; i < 5; i++)
        {
            
            printf("%d ", arr3[i]);
        } 
}

int main(){
        int arr1[5];
        int arr2[5];
        int arr3[5];

        printf("Enter the first array:\n");
         printf("Enter the second array:\n");
        func2(arr2);
        printf("\n");
        for (int i = 0; i < 5; i++)
        {
                arr3[i] = arr1[i] + arr2[i];
        }
        // PRINTING THE SUM OF TWO ARRAY:

        for (int i = 0; i < 5; i++)
        {
                 printf("%d: ", arr3[i]);
        }
        
        return 0;
}