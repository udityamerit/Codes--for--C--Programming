// #include<stdio.h>

//  //typedef <previous_name> <alias_name>;
//  // typedef is change the long name in to the short name as user defined in the program;
//  // For Example ==> typedef student std;
//  // here program read the student as std in the entire program;
  
// typedef struct student
// {
//         int id;
//         int marks;
//         char fav_char;

// } std;

// int main()
// {
//         std s1,s2;
//         s1.id = 56;
//         s2.id = 34;
//         printf("Value of s1 Id is %d\n", s1.id);
//         printf("Value of s2 Id is %d\n", s2.id);
// }

#include<stdio.h>
void getarray(int arr[5])
{
        printf("Your first array is : ");

         for (int i = 0; i < 5; i++)
        {
            
            printf("%d ", arr[i]);
        }       
}

void getarray2(int arr1[5])
{
        printf("Your second array is : ");

         for (int i = 0; i < 5; i++)
        {
            
            printf("%d ", arr1[i]);
        }       
}

void getarray3(int arr2[5])
{
        printf("Sum of two array is : ");

         for (int i = 0; i < 5; i++)
        {
            
            printf("%d ", arr2[i]);
        }       
}

int main()
{
        int arr[5] = {23,12,21,45,43};
        int arr1[5] = {32,72,21,45,43};
        int arr2[5] = { };
        printf("%d",arr);
        getarray(arr);
        printf("\n");
        getarray2(arr1);
        printf("\n");
        for (int i = 0; i < 5; i++)
        {
                arr2[i] = arr[i] + arr1[i];
        }

        getarray3(arr2);
        
        return 0;
}