#include<stdio.h>
#include<conio.h>

void main()
{
     clrscr();
     char s1[80],s2[30],store[20];
     int length1=0,length2=0,i,j,k,found;

     printf("Enter Your String:");
     gets(s1);

     while(s1[length1]!='\0')
     length1++;

     printf("Enter The Word To Be Deleted:");
     gets(s2);
     while(s2[length2]!='\0')
     length2++;

     for(i=0;i<length1;++i)
     {
     found=1;
     store[i]=s1[i];

     for(j=0;j<length2;++j)
     { if(s1[i+j]!=s2[j])
      {found=0;
      break;
      }
     }

     if(found==1)
     {

     printf("String Found!");
     for(k=i-1,j=i+length2;j<=length1;++j,++k)
     {store[k]=s1[j];}

     printf("\n");
     printf("%s",store);
     break;
     }

     }

     if(found==0)
     {
     printf("Word To Be Deleted Not Found!");
     }

     getch();
     }