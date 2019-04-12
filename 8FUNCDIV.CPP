#include<stdio.h>
#include<conio.h>

int divide()
{

   int a,b,c;

   printf("Please Enter Your Data:");
   scanf("%d%d",&a,&b);

   c=a/b;

   return c;

}


void main()
{
     clrscr();

     int c;
     c=divide();

     printf("Your Answer Is: %d",c);

     getch();

     }

