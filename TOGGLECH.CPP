#include<stdio.h>
#include<conio.h>

void main()
{

     clrscr();
     char original[60],toggled[60];
     int length=0,i,key;

     printf("Enter Original String:\n");
     gets(original);

     while(original[length]!='\0')
     length++;

     for(i=0;i<=length;++i)
     {
       if(original[i]>='A'&&original[i]<='Z')
       toggled[i]=original[i]+32;
       else if(original[i]>='a'&&original[i]<='z')
       toggled[i]=original[i]-32;
       else toggled[i]=original[i];
      }

      printf("Toggled String:%s",toggled);

      getch();

      }