#include<stdio.h>
#include<conio.h>

void divide()
{
     int a,b,c;

     printf("Please Enter Your Data:");
     scanf("%d%d",&a,&b);

     c=a/b;

     printf("Your Answer Is: %d",c);

     }

     void main()
     {
     clrscr();
     divide();

     getch();

     }