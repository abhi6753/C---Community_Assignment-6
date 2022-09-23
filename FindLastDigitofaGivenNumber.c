#include<stdio.h>
#include<conio.h>
int main()
{
    int num,last_digit;
    printf("Enter a number:\n");
    scanf("%d",&num);
    last_digit = num%10;
    printf("Last digit of %d is %d",num,last_digit);
    getch();
    return 0;
}