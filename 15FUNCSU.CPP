#include<stdio.h>
#include<conio.h>

int substract(int a,int b)
{
     int c;
     c=a-b;
     return c;
}

void main()
{
     clrscr();
     int a,b,c;

     printf("Please Enter Your Data:");
     scanf("%d%d",&a,&b);

     c=substract(a,b);

     printf("Your Answer Is: %d",c);

     getch();

     }