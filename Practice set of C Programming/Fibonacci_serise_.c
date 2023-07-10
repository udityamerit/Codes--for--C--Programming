#include<stdio.h>

 // Calculation of Fabonacci serise:

//Using Recursive Approach:

int fib_recursive(int n)
{
        if (n==1 || n==2)
        {
                return n-1;
        }
        else
        {
                return fib_recursive(n-1) + fib_recursive(n-2);
        }       
}

 //Using Itrerative Approach:

int fib_iterative(int n)
{
        int a = 0;
        int b = 1;
        for (int i = 0; i < n-1; i++)
        {
                b= a+b;
                a= b-a;
        }
        return a;
        
}

int main()
{
        int number;
        printf("Enter the index to get fibonacci serise :\n");
        scanf("%d", &number);

        printf("The fibonacci number at position no %d using recursive approach is: %d\n",number, fib_recursive(number));

        printf("The fibonacci number at position no %d using iterative approach is: %d\n",number, fib_iterative(number));

        return 0 ;
}