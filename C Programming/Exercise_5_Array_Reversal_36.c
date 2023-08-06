// Addition of Two 1-D Arrays
#include<stdio.h>
int main(){
        int arr[5];
        int i = 0;
        printf("Enter your first array: \n");
        for ( i = 0; i < 5; i++)
        {
                printf("Enter the elements of the array: ");
                scanf("%d",&arr[i]);
        }
        printf("Your first array is = ");
        for ( i = 0; i < 5; i++)
        {
                printf("%d ",arr[i]);
        }
        printf("\n\n");

        // I am Going to copy the first array 
        // and modify is in second array

        int arr1[5];
        printf("Enter your second array: \n");
        for ( i = 0; i < 5; i++)
        {
                printf("Enter the elements of the array: ");
                scanf("%d",&arr1[i]);
        }
        printf("Your second array is = ");
        for ( i = 0; i < 5; i++)
        {
                printf("%d ",arr1[i]);
        }
        printf("\n\n");

        printf("Sum of two arrays is : ");
        for ( i = 0; i < 5; i++)
        {
                printf("%d ",arr[i]+arr1[i]);
        }
        return 0;
        
        
}