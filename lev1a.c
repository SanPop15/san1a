#include<stdio.h>
#include<conio.h>
void main()
{
int num;
pritnf("Enter any number");
scanf("%d",&num);
if(num>=0)
{
printf("Positive");
}
if(num<=0)
{
printf("Negative");
}
if(num==0)
{
printf("Zero");
}
getch();
}
