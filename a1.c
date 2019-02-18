#include<stdio.h>
#inlcude<conio.h>
void main()
{
int n;
printf("Enter number");
scanf("%d",&n);
if(n>=0)
{
printf("Positive");
}
if(n<=0)
{
printf("Negative");
}
if(n==0)
{
printf("Zero");
}
getch();
}
