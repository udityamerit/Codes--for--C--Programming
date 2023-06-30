#include<stdio.h>
int main()
{

float tax,income;
tax = 0;
printf("Enter your income in lakh:");
scanf("%f",&income);
if (income<2.5)
{
    printf("running less than 2.5\n");
    tax = tax + 0*(income);
    printf("your total tax is lakh = %f",tax);
}
else if (2.5<income & income<=5.0)
{   
    printf("running 2.5 to 5 lakhs\n");
    tax = tax + 0.05*(income - 2.5);
    printf("your total tax is lakh = %f",tax);

}
else if (5.0<income & income<=10)
{   
    printf("running 5 to 10 lakhs\n");
    tax = tax + 0.05*(5.0 - 2.5);
    tax = tax + 0.2*(income-5.0);
    printf("your total tax is lakh = %f",tax);
}
else if (income>10.0)
{   
    printf("running more than 10 lakhs\n");
    tax = tax + 0.05*(5.0 - 2.5);
    printf("2.5lakh tax: %f\n", tax);

    tax = tax + 0.2*(10.0 - 5.0);
    printf("5 to 10 lakh tax: %f\n", tax);

    tax = tax + 0.3*(income - 10.0);

    printf("your total tax is lakh = %f\n",tax*1e5);
}


    return 0;
} 