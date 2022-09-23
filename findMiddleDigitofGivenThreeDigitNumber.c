#include<stdio.h>
#include<conio.h>
int main()
{
    int num,middle_digit;
    printf("Enter any 3-digit number:\n");
    scanf("%d",&num);
    middle_digit = num/10;
    middle_digit %=10;
    printf("Middle digit of %d is %d",num,middle_digit);
    getch();
    return 0;
}