#include<stdio.h>
#include<conio.h>


int multiply()
{
     int a,b,c;

     printf("Please Enter YourData:");
     scanf("5d%d",&a,&b);

     c=a*b;

     return c;

     }


     void main()
     {

     clrscr();
     int c;

     c=multiply();

     printf("Your Answer Is: %d",c);

     getch();

     }