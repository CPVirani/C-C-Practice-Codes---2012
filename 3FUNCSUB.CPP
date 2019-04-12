#include<stdio.h>
#include<conio.h>

void substract()
{
     int a,b,c;

     printf("Please Enter Your Data");
     scanf("%d%d",&a,&b);

     c=a-b;

     printf("Your Answer Is:%d",c);

     }


     void main()
     {
     clrscr();
     substract();
     getch();
     }