#include<stdio.h>
#include<conio.h>

void main()
{

     clrscr();
     int n,digit;

     printf("Enter The Number:");
     scanf("%d",&n);

     while(n>0)
     {
	 digit=n%10;
	 if(digit>=8)
	 {
	 printf("Not An Octal Number");
	 return;
	 }

	 n=n/10;
	 }

	 printf("Given Number Is Octal.");

	 getch();

	 }