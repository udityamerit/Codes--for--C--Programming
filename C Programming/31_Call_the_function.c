#include<stdio.h>

//Using call by refrence:

// void changevalue(int* address)
// {
//       *address = 345;
// }
// int main(){
//         int a=34,b=65;
//         printf("the value of a is %d\n",a);
//         changevalue(&a);
//         printf("the new value of a is %d",a);
//         return 0;
// }

 //Quick Quiz:

 void changevalue(int* address,int* Address)
 {
        *address = (4+3);
        *Address = (4-3);
 }
 int main(){
        int a = 4,b = 3;
        printf("The value of the a is %d\n",a);
        
        changevalue(&a );
        printf("The new value of the a is %d\n",a);
        
        printf("The value of b is %d\n",b);
        changevalue(&b);
        printf("The new value of the b is %d\n",b);
        return 0 ;

 }