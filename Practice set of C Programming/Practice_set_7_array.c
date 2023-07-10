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