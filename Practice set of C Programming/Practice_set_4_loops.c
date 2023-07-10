#include<stdio.h>
int main(){
    // date 2/7/23:

//    Question 1 : Print the multiplication table
//  int n;
//  int i = 0;
//  printf("Enter the number to be printed : \n");
//  scanf("%d",&n);
//  for ( i = 1; i <= 10; i++)
//  {
//     printf(" %d X %d = %d\n",n,i ,n*i);
//  }

// Question 2:Print the multiplication table in reversed order

//  int i;
//  printf("Table of 10:\n");
//  for ( i = 10; i >0 ; i--)
//  {
//     printf(" %d X %d = %d\n",10,i ,10*i);
//  }

// Question 3:do while loop is executed at least once:

// Question 4: True

// Question 5: Using while loop to sum the first ten natural number

// int i =0,sum = 0;
// while (i<10)
// {
//   i= i+1;
//   sum = sum + i;}
//   printf("sum of the numbers: %d\n",sum);


//Question 6 :

// int i = 0 , sum = 0;
// for ( i = 0; i <= 10; i++)
// {
//   sum = sum + i;
// }
//  printf("sum of the numbers :%d", sum);

// Question 6:sum using do while loop:

// int i = 0,sum = 0 ;
// do
// {
//  i = i + 1;
//  sum = sum + i;
// } while (i<10);
// printf("sum of the first ten natural number :%d",sum);

 //Questio 7: print the table and sum of the table

// int n = 8,i , sum =0 ;
// for ( i = 1; i <= 10; i++)
// {
//   printf("%d X %d = %d\n",n,i,n*i);
//    sum = sum +n*i;
// }
//  printf("sum of the table is = %d", sum);

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
