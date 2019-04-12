#include<stdio.h>
#include<conio.h>

void main()
{
     clrscr();
     char original[60],decoded[60],encoded[60];
     int i,key,length=0;

     printf("Please Enter Original String:");
     gets(original);

     while(original[length]!='\0')
     length++;

     printf("Enter Key Of Encryption(1 to 5):");
     scanf("%d",&key);

     for(i=0;i<=length;++i)
     {encoded[i]=original[i]+key;}
     encoded[i]='\0';
     printf("\n");
     printf("Encoded Code Is:%s",encoded);

     for(i=0;i<length;++i)
     {decoded[i]=encoded[i]-key;}
     decoded[i]='\0';
     printf("Please Enter Decoded String:%s",decoded);

     getch();
     }