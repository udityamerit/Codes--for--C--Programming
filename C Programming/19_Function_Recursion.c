 #include<stdio.h>
 int sum (int a, int b); //Declaration of the function

 int main(){
    int num1,num2,total =0;
    printf("Enter the number 1 :\n");
    scanf("%d",&num1);

    printf("Enter the number 2 :\n");
    scanf("%d",&num2);
     
    total = sum (num1,num2);
    printf("Total = %d",total);
    return 0 ;
 }

 int sum( int a ,int b) //Definition of the function
 {
    int result;
    result = a+b;
    return result;
 }