#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter two value:\n");
    scanf("%d%d",&a,&b);

    printf("Before swapping\nValue of a=%d and b=%d ",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping\nValue of a=%d and b=%d ",a,b);
    getch();
    return 0;
}