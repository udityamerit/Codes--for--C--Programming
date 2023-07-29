// #include<stdio.h>
// int main(){

        //using pointer function 

//         int a = 76; //variable
//         int *ptra = &a; //pointer address the variable
//         printf("The address of pointer to a is %p\n", &ptra);
//         printf("The value of a is %d\n", *ptra);
//         printf("The value of a is %d\n", a); 
//         printf("The address of a is %p\n", ptra);
//         printf("The address of a is %p\n", &a);
        
//         return 0 ;

// } 


// Arrays and pointers arithmetics:

#include<stdio.h>
int main(){
        // int a = 76;
        // int* ptra = &a;
        // printf("%d\n",ptra);
        // printf("%d\n",ptra+1);
        // ptra++;
        // printf("%d\n",ptra);
        // printf("%d\n",ptra+2);

        int arr[] = {1,2,3,4,5,6,34};
        printf("value at position 3 of the arry is %d\n", arr[3]);
        printf(" The address of the first element of the array is %d\n",&arr[0]);
        printf(" The address of the first element of the array is %d\n",arr);
         
        printf(" The address of the second element of the array is %d\n",&arr[1]);
        printf(" The address of the second element of the array is %d\n",arr+1);

        printf(" The value at address of the first element of the array is %d\n",*(&arr[0]));
        printf(" The value at address of the first element of the array is %d\n",arr[0]);
        printf(" The value at address of the first element of the array is %d\n",*(arr)) ;
        
        printf(" The value at address of the second element of the array is %d\n",*(&arr[1]));
        printf(" The value at address of the second element of the array is %d\n",arr[1]);
        printf(" The value at address of the second element of the array is %d\n",*(arr+1));
        return 0 ;

} 