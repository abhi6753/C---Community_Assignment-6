//Write a program to take a three digit number from the user and rotate its digits by one\
position towards the right
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num,rem,store,value,count=0;
    printf("Enter a 3-digit number:\n");
    scanf("%d",&num);
    int temp=num;
    while(temp!=0)
    {
        temp/=10;
        count++;
    }
    temp=num;
    rem=temp%10;
    temp=temp/10;
    value = rem*pow(10,count-1)+temp;
    printf("Value after rotating:\n%d",value); 
    getch();
    return 0;
}