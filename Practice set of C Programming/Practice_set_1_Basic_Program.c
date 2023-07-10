#include <stdio.h>
int main()
{
 // Date 9/7/23:
 
        // Question 1: Calculation of area of recctangle ==>

        int l,b,area;
        printf("Enter the length of the rectangle:\n");
        scanf("%d",&l);
        printf("Enter the width of the rectangle:\n");
        scanf("%d",&b);
        area = l * b;
        printf("Area of the rectangle is = %d ",area);

        // Question 2 :Calculatio of the area of circle ==>

         float r,Area;
         printf("Enter the radius of the circle: \n");
         scanf("%f",&r);
         Area = 3.14 * (r*r);
         printf("Area of the circle if radius is %f = %f",r,Area);

        // Question 3 : Conversion of temperature unit ==>

          float c,temp;
          printf("Enter the temp in degree celcius : \n");
          scanf("%f",&c);
          temp = (9*c/5) + 32;
          printf("Your temp is %f degree celcius is = %f   farenheit ", c,temp);

        // Question 4: Calculation of simple intrest==>

        float p, r, t, si;
        printf("Enter the principal amount in rs : ");
        scanf("%f", &p);
        printf("Enter the intrest rate in percent : ");
        scanf("%f", &r);
        printf("Enter the time in years : ");
        scanf("%f", &t);
        si = (p * r * t) / 100;
        printf(" Your simple intrest is =  %f", si);

        return 0;
}