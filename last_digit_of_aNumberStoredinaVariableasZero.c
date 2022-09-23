#include<stdio.h>
#include<conio.h>
int main()
{
    int num,put=10;
    printf("Enter a number:\n");
    scanf("%d",&num);
    put *=num/10;
    printf("%d",put);
    getch();
    return 0;
}