// Printing the star pattern 

#include<stdio.h>
int main(){
        int n,num;
        printf("Please enter 1 to print trangular star pattern:\n");
        printf("Please enter 2 to print the star pattern in reverse trangular order:\n");
        printf("Please enter the number:");
        scanf("%d",&n);
        printf("Enter the number to print the star pattern:");
        scanf("%d",&num);
        switch (n)
        {
        case 1:
                printf("Your star patter is:\n");
                for (int  i = 0; i <= num; i++)
                {
                        for (int j = 0; j < i; j++)
                        {
                                  printf("*");
                        }
                    printf("\n");   
                }
                break;
        
        default:
                break;
        case 2:
        {
                printf("Your reverse star patter is:\n");
                for (int  i = num; i>= 0; i--)
                {
                        for (int j = 0; j < i; j++)
                        {
                                  printf("*");
                        }
                    printf("\n");   
                }
                break;
        } 
               
        }

        return 0 ;
}