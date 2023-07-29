#include<stdio.h>

 //typedef <previous_name> <alias_name>;
 // typedef is change the long name in to the short name as user defined in the program;
 // For Example ==> typedef student std;
 // here program read the student as std in the entire program;
  
typedef struct student
{
        int id;
        int marks;
        char fav_char;

} std;

int main()
{
        std s1,s2;
        s1.id = 56;
        s2.id = 34;
        printf("Value of s1 Id is %d\n", s1.id);
        printf("Value of s2 Id is %d\n", s2.id);
}
