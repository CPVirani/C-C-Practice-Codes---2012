#include<stdio.h>
#include<conio.h>

void multiply()
{

    int a,b,c;

    printf("Please Enter Your Data:");
    scanf("%d%d",&a,&b);

    c=a*b;

    printf("Your Answer is: %d",c);

}

     void main()
     {

     clrscr();
     multiply();

     getch();

     }