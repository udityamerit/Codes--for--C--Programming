#include<stdio.h>
int main(){
        int arr[10];
        int n;
        printf("Enter the length of an array: ");
        scanf("%d",&n);
        printf("Enter the element of an array:\n");
        for (int i = 0; i < n; i++)
        {

                printf("arr[%d] = ",i );
                scanf("%d",&arr[i]);
        }
        printf("Element of an array is: ");

        for (int i = 0; i < n; i++)
        {
               printf(" %d " "",arr[i]);
        }
        return 0 ;
        
}

