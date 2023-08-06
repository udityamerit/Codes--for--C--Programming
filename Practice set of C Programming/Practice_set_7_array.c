#include<stdio.h>
int main(){
      
      int marks[5];
      for (int i = 0; i < 5; i++)
      {
            printf("Enter the %d element of the array :\n",i);
            scanf("%d",&marks[i]);
      }
      for (int i = 0; i < 5; i++)
      {
            
            printf("%d ",marks[i]);
      }

     
      
      return 0 ;
}

// printing two 1-d array using functions

#include<stdio.h>

int func1 (){
        int arr[5];
        for (int i = 0; i < 5; i++)
        {
                printf("Enter the element of an array: ");
                scanf("%d",&arr[i]);
        }
         for (int i = 0; i < 5; i++)
        {
            
            printf("%d ", arr[i]);
        }
        printf("\n");
        return arr[5];
}

int func2 (){
        int arr1[5];
        for (int i = 0; i < 5; i++)
        {
                printf("Enter the element of an array: ");
                scanf("%d",&arr1[i]);
        }
         for (int i = 0; i < 5; i++)
        {
            
            printf("%d ", arr1[i]);
            
        }
         printf("\n");
        return arr1[5];

}

int main(){

        printf("Enter the first array:\n");
        func1();
        printf(' ');
        printf("Enter the second array:\n");
        func2();
        printf(' ');
        
        return 0;
}

// printing sum of two 1-d arrays

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
        printf("You new array whose sum of two array is :");

        for (int i = 0; i < 5; i++)
        {
                printf("%d ",arr[i]+arr1[i]);
        }

        return 0;
}


