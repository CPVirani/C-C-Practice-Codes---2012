#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
     clrscr();

     char s[40];
     int i,j,flag=0;

     printf("Please Enter Your String:");
     gets(s);
     printf("\n");

     for(i=0,j=strlen(s)-1;i<strlen(s)/2;++i,--j)
     {
     if(s[i]!=s[j])
     {
     flag=1;
     break;}
     }

     if(flag==0)
    { printf("Palindrome"); }
     else
  {   printf("Not Palindrome"); }

     getch();

     }