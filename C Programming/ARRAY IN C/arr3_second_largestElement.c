// find the second largest element in an array:

#include<stdio.h>
int main(){
        int n, arr[10],large, pos;
        printf("Enter the length of an array: ");
        scanf("%d",&n);
        printf("Enter the element of array:\n");
        for (int i = 0; i < n; i++)
        {
                printf(" arr[%d] = ",i);
                scanf("%d",&arr[i]);
        }
        printf("\nYour array is: ");
        for (int i = 0; i < n; i++)
        {
                printf("%d"" ",arr[i]);
        }
        large = arr[0];
        pos = 0;
        for (int i = 0; i < n; i++)
        {
                if (arr[i]>large)
                {
                        large = arr[i];
                        pos = i;
                }
                
        }

        int second_largest = arr[n-pos-1];
        for (int i = 0; i < n; i++)
        {
                if (arr[i]>second_largest)
                {
                        second_largest = arr[i];
                }
                
        }
        
        printf("\nLargest element of an array: %d\n",large);
        printf("\n seccond Largest element of an array: %d\n",second_largest);
        printf("\nPosition of the largest element of an array is: %d\n",pos);
        return 0;
        
        
        
}