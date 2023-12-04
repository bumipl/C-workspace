/* name.c */
#include <stdio.h>

int main()
{
    char name[32];
    char surname[32];
    
    printf("What is your name?\n");
    scanf("%s", &name); /*We are telling what to scan %s is string*/
    printf("What is your surname?\n");
    scanf("%s", &surname); /*We are telling what to scan %s is string*/
    printf("Hello %s %s\n", name, surname);
     
 
    return 0;
}
