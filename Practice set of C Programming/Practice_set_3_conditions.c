#include<stdio.h>
int main(){
    //Question 6:
//     int  num1,num2,num3,num4;
//     printf("Enter the four  numbers: ");
//     scanf("%d %d %d %d",&num1,&num2,&num3,&num4);

// if (num1>num2&&num1>num3&&num1>num4)
// {
//     printf("gretest number is = %d",num1);
// }
// else if (num2>num1&&num2>num3&&num2>num4)
// {
//     printf("gretest number is = %d",num2); 
// }
// else if (num3>num2&&num3>num1&&num3>num4)
// {
//     printf("gretest number is = %d",num3); 
// }
// else if (num4>num2&&num4>num3&&num4>num1)
// {
//     printf("gretest number is = %d",num4); 
// }

// Question 2
// int p,m,c ;
// printf("Enter your subject marks:\n");
// scanf("%d %d %d",&p,&m,&c);
// float avg = (p+m+c)/3.0;
//  printf("your percentage is=%f \n", avg);
// if ((p=m=c)>=33&& avg>40)
// {
//       printf("you pass the exam");
// }
// else
// {
//     printf("you fail the exam");
// }

// Question 3: Tax calculation

float tax,income;
tax = 0;
printf("Enter your income in lakh:");
scanf("%f",&income);
if (income<2.5)
{
    tax = tax + 0*(income);
    printf("your total tax is lakh = %f",tax);
}
else if (2.5<tax<=5.0)
{
    tax = tax + 0.05*(income - 2.5);
    printf("your total tax is lakh = %f",tax);

}
else if (5.0<income<=10.0)
{
    tax = tax +0.05*(5.0 - 2.5);
    tax = tax +0.2*(income-5.0);
    printf("your total tax is lakh = %f",tax);
}
else if (income>10.0)
{
    tax = tax + 0.05*(5.0 - 2.5);
    tax = tax + 0.2*(10.0 - 5.0);
    tax = tax + 0.3*(income - 10.0);
    printf("your total tax is lakh = %f",tax);
}


    return 0;
} 