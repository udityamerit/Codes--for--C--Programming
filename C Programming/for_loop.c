# include<stdio.h>
int main(){
    int n ,i = 0;
    printf("Enter the number to print the table");
    scanf("%d",&n);
    for ( i = 1; i <= 10; i++)
    {
        printf(" %d X %d = %d \n ",n,i,n*i);
    }
    return 0;
}