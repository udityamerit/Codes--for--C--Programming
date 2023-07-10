// if you use the function without argument use voide (return type)
// Question 1 :

// #include<stdio.h>
//  int avg(int a, int b, int c){
//       return (a+b+c)/3;
//  }
//  int main(){
//       int a,b,c,s;
//       printf("Enter the first number:\n");
//       scanf("%d",&a);
//       printf("Enter the second number:\n");
//       scanf("%d",&b);
//       printf("Enter the third number:\n");
//       scanf("%d",&c);
//       s = avg(a,b,c);
//       printf("avg of the three numbers is = %d",s);
//  }

// Question 2:

// #include<stdio.h>
//  int temp (float c){  //declaration of a function

//            return ((9*c/5)+32);
// }

//  int main(){
//       float c , F;
//       printf("Enter the temperature in degree C* : ");
//    scanf("%f",&c);

//       F = temp(c);
//       printf("Temperature in degree F is = %f",F);
//       return 0 ;
// }

// int temp (int a){  //defination of the function
//       float result;
//       result = ((9/5)*a+32);
//       return result;
// }

// Question 3:

// #include <stdio.h>

// int force(float m ){
//       return (m * 9.8);
// }

// int main()
// {
//       float m, F, g = 9.8;
//       printf("Enter your mass: ");
//       scanf("%f", &m);
//       F = force(m);
//       printf("Gravitationsal force of attration on a body is = %f",F);
//       return 0;
//  }

// Question 5:

// # include<stdio.h>
// int main(){ int a;
//       printf("%d %d %d\n",a,++a,a++);
// }

// Question 7:
#include <stdio.h>

void func1(int num)
{
        for (int i = 0; i <= num; i++)
        {
                for (int j = 0; j < i; j++)
                {
                        printf("*");
                }
                printf("\n");
        }
}

int main()
{
        int num;
        printf("Enter the number to print star pattern: ");
        scanf("%d", &num);
        printf("Your pattern is:\n");
        func1(num);
        return 0;
}
