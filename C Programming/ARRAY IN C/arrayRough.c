#include<stdio.h>

int main (){
        int arr[5];
         int sum = 0;
        printf("Enter the first array:\n");
        for (int i = 0; i < 5; i++)
        {
                printf("Enter the element of an array: ");
                scanf("%d",&arr[i]);
        }
        printf("Your first array is: ");
         for (int i = 0; i < 5; i++)
        {
            
            printf("%d ", arr[i]);
        }
        printf("\n\n");
       
        printf("Enter the second array:\n");
        int arr1[5];
        for (int i = 0; i < 5; i++)
        {
                printf("Enter the element of an array: ");
                scanf("%d",&arr1[i]);
        }
        
        printf("Your second array is: ");
         for (int i = 0; i < 5; i++)
        {
            
            printf("%d ", arr1[i]);
            
        }

         printf("\n\n");
        printf("Your new array which is sum of two arrays is :");

        for (int i = 0; i < 5; i++)
        {
                printf("%d ",arr[i]+arr1[i]);
        }

        return 0;
}