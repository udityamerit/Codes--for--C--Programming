#include<stdio.h>
#include<string.h>

int main(){
        char s1[] = "anuj";
        char s2[] = "uditya";
        char s3[54] ;
        // puts(strcat(s1,s2)); //This is use for print the strings
        printf("The length of s1 is %d\n", strlen(s1));
        printf("The reversed string s1 is: ");
        puts(strrev(s1));
        printf("The length of s2 is %d\n", strlen(s2));
        printf("The reversed string s2 is: ");
        puts(strrev(s2));

        strcpy(s3, strcat(s1,s2));
        puts(s3);

        return 0 ;

}


// input from the user

#include<stdio.h>
void printStr (char str[]){
        int i=0;
        while (str[i]!='\0')
        {
                printf("%c",str[i]);
                i++;;
        }
        
}
int main(){
        char str[]= {'u', 'd', 'i', 't', 'y', 'a', '\0'}; // '\0' is use for  terminaing the string in an array 
        char str[]= "uditya"; // if we use this line then no use of the '\0' character
          printStr(str);
         
        char str[43];
        gets(str);
        printf("Using of the %s\n", str);
        printf("using puts: \n");
        puts(str);


      
        return 0;
}