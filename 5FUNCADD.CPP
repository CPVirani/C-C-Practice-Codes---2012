#include<Stdio.h>
#include<conio.h>

int sum()
{
     int a,b,c;

     printf("Please Enter Your Data:");
     scanf("%d%d",&a,&b);

     c=a+b;

     return c;

     }

     void main()
     {

     clrscr();
     int c;

     c=sum();

     printf("Your Answer Is: %d",c);

     getch();
     }
