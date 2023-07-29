 #include<stdio.h>
 struct student
 {
        int id;
        int marks;
        char fav_char;
 };

 int main()
{
        struct student harry, ravi,shubham;
        harry.id = 1;
        harry.marks = 45;
        harry.fav_char = 'b';

        ravi.id = 2;
        ravi.marks = 466;
        ravi.fav_char = 'c';

        shubham.id = 3;
        shubham.marks = 456;
        shubham.fav_char = 'v';


        printf("Harry got %d marks \n" , harry.marks);


        return 0 ;
}
 