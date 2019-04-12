#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    int i,j,flag;

    for(i=50;i<=150;++i)
    {
      for(j=2;j<i/2;++j)
      {
       flag=0;
       if(i%j==0)
       { flag=1;
       break;
      }

    }

    if(flag==0)
    {printf("\n");
    printf("%d id a prime number",i);}

    }
    getch();

    }


