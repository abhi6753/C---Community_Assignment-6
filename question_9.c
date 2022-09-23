//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and \
convert it into USD
#include<stdio.h>
#include<conio.h>
int main()
{
    float usd=1;
    float INR=76.23,your_money;
    printf("Enter your money(INR):\n");
    scanf("%f",&your_money);
    usd = your_money/INR;
    printf("Your money\nINR = Rs %.2f\nUSD = %.2f $",your_money,usd);
    getch();
    return 0;

}