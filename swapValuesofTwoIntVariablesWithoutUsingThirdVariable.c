#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of a=%d b=%d",a,b);
    getch();
    return 0;
}