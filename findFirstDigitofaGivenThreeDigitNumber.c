#include<stdio.h>
#include<conio.h>
int main()
{
    int num,first_digit;
    printf("Enter any 3-digit number:\n");
    scanf("%d",&num);
    int dnum=num;
    int count=0;
    while(dnum!=0)
    {
        dnum/=10;
        count++;
    }
    if(count==3)
    {
       first_digit = num/10; 
       first_digit/=10;
       printf("First digit of %d is %d",num,first_digit);
    }
    else{
        printf("\nPlz.. enter 3-digit number!!!");
    } 
    getch();
    return 0;
}