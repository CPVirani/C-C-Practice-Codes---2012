#include<stdio.h>
#include<conio.h>

void main()
{

     clrscr();
     int num,sum;

     printf("Enter A Number:");
     scanf("%d",&num);
     do{sum=0;
     while(num>0)
     {
     sum+=num%10;
     num/=10;
     }

     num=sum;}

     while(sum>=10);

     if(sum==1)
     {printf("Magic Number!!");}
     else{printf("Not <agic!!");}

     getch();

     }