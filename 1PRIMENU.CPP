#include<stdio.h>
#include<conio.h>

void main()
{
     clrscr();
     int i,n,flag=0;
     printf("Please Enter Your Number:");
     scanf("%d",&n);
     for(i=2;i<n;++i)
     {
      if(n%i==0)
       {
       flag=1;
       break;
       }
     }


   if(flag==0)
   {
   printf("\n");
   printf("%d is a prime number",n);
   }

   else
   {
   printf("\n");
   printf("%d is NOT a prime number",n);
   }

   getch();

   }