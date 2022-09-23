#include<stdio.h>
#include<conio.h>
int main()
{
    int num,digit,res_num;
    printf("Enter number:\n");
    scanf("%d",&num);
    printf("Enter digit:\n");
    scanf("%d",&digit);
    res_num = num*10+digit;
    printf("After apppend, number = %d",res_num);
    getch();
    return 0;
}