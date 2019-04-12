#include<stdio.h>
#include<conio.h>

void multiply(int a, int b)
{
     int c;

     c=a*b;

     printf("Your Answer Is: %d",c);

}

void main()
{
     clrscr();
     int a,b,c;

     printf("Please Enter Your Data:");
     scanf("%d%d",&a,&b);

     multiply(a,b);

     getch();

     }

