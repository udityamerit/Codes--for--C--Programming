#include <stdio.h>
void func1(int num)
{

        for (int i = 0; i < num; i++)
        {
                for (int j = 0; j < i; j++)
                {
                        printf("*^@");
                }

                printf("\n");
        }
}

void func2(int num)
{

        for (int i = num; i >= 0; i--)
        {
                for (int j = 0; j < i; j++)
                {
                        printf("*^@");
                }

                printf("\n");
        }
}

int main()
{
        int num;
        printf("Enter the number to print the pattern:\n ");
        scanf("%d", &num);
        func1(num);
        func2(num);
        return 0;
}