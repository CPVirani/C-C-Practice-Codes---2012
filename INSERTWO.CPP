#include<stdio.h>
#include<conio.h>

void main()
{

     clrscr();
     char s1[60],s2[20],all[80];
     int length1=0,length2=0,i,j,pos;

     printf("Enter A String:");
     gets(s1);

     while(s1[length1]!='\0')
     length1++;
     printf("Enter The words To Be Inserted:");
     gets(s2);

     while(s2[length2]!='\0')
     length2++;

     printf("Enter Position From Where You Want To Insert:");
     scanf("%d",&pos);

     for(i=0;i<pos;++i)
     all[i]=s1[i];

     for(i=pos,j=0;j<length2;++j,++i)
     all[i]=s2[j];

     for(i=length2+pos,j=pos;j<length1;++i,++j)
     all[i]=s1[j];

     all[length1+length2]='\0';

     printf("%s",all);

     getch();

     }

