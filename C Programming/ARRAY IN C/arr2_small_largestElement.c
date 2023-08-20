// Smallest and largest element of an array:
// and switch each other:


#include<stdio.h>
int main(){

        int n,arr[10] ,small,pos,temp;
        printf("Enter the length of an array: ");
        scanf("%d",&n);
        printf("Enter the element of an array: \n");
        for (int i = 0; i < n; i++)
        {
                printf("arr[%d] = ",i);
                scanf("%d",&arr[i]);
        }       
         printf("\n");
         printf("your array is : ");
         
        for (int i = 0; i < n; i++)
        {
                printf("%d"" ",arr[i]);
        }
        
        small = arr[0];
        pos = 0;
        for (int i = 0; i < n; i++)
        {
                if (arr[i]<small)
                {
                       small = arr[i];
                       pos = i;
                }
                
        }
        printf("\n smallest element of the arrya is : %d \n",small);
        printf("position of smallest element of an array is: %d \n",pos);

        int large,pos1;
        large = arr[0];
        pos1 = 0;
        for (int i = 0; i < n; i++)
        {
                if (arr[i]>large)
                {
                       large = arr[i];
                       pos1 = i;
                }
                
        }
         
        printf("\n largest element of the arrya is : %d \n",large);
        printf("position of largest element of an array is: %d \n",pos1);
// switch the element:

        temp = arr[pos1];
        arr[pos1] = arr[pos];
        arr[pos] =temp;

        printf("new array is : ");
        for (int i = 0; i < n; i++)
        {
                printf("%d"" ",arr[i]);
        }
        

         
 return 0 ;
        

}