#include <stdio.h>
int main()
{
    char name[10];
    int age;
    
    printf("Enter your name: "); 
    scanf("%s" , &name);

    printf("Enter your age");
    scanf("%d" , &age);

    printf("Your name is: %s and your age is: %d\n", name , age);
    return 0;
}
/*int main()
{
    char name;
    int age;

    printf("My name is Avani Garg\n");
    printf("My age is 17\n");
    return 0;
}*/