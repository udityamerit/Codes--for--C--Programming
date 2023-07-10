#include<stdio.h>
int main(){
        int a = 23;
        int* ptra = &a;
        printf(" adderss of a is %p\n",ptra);
// adderss of a is 0061FF18
        printf("the value of a is %d\n",&ptra);
        printf("the value of a is %p\n",&a);
}