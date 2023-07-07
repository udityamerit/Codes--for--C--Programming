#include<stdio.h>
int main()
{
// Question 8:factorial calculation

int n ;
 printf("Enter the number to find the factorial of the number: ");
 scanf("%d",&n);
 int fac = 1;
 for ( int i = 1; i <=n; i++)
 {
    fac *= i;
 }
  printf("factorial of the %d is = %d",n,fac);


 return 0 ;
 
}
