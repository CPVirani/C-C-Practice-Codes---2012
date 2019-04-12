#include<stdio.h>
#include<conio.h>

void main()
{

     clrscr();
     char s1[30],s2[40];
     int length,i,j;

     printf("Please Enter A String:");
     gets(s1);
     printf("\n");

     length=0;
     while(s1[length]!='\0')
     {length++;}

     for(i=0,j=length-1;i<length;++i,--j)
     {s2[j]=s1[i];}

     s2[length]='\0';
     printf("Reverse String:%s",s2);

     getch();

     }