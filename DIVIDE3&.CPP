#include<stdio.h>
#include<conio.h>

void main()
{

     clrscr();
     int n1,n2,i,count=0;

     printf("Enter n1 and n2 (n1<n2):");
     scanf("%d%d",&n1,&n2);

     for(i=n1;i<=n2;++i)
     {
       if(i%3==0&&i%6!=0)
       {
       printf("%d\t",i);
       count++;
       if(count%6==0)
       {printf("\n");}
       }
       }
       printf("\ncount=5d",count);

       getch();

       }