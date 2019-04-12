#include<stdio.h>
#include<conio.h>

int substract()
{

     int a,b,c;

     printf("Please Enter Your Data:");
     scanf("%d%d",&a,&b);

     c=a-b;

     return c;

}



void main()
{
     clrscr();
     int c;

     c=substract();

     printf("Your Answer Is: %d",c);

     getch();

     }