#include<stdio.h>
int main(){

    // "Use of for loop"

    int i = 0;
    for (i = 0; i < 10; i++) 
    {
        printf("%d \n",i);
    }
  
    // // Use of while loop:

    i = 0;
    while (i<10)
    {
        printf("%d\n",i);
        i++;
    }

    //Use of do while looop:

    do 
    {
       
        printf("%d\n",i);
       i = i+1;
     
    } while (i<10);
    

    return 0  ;
}