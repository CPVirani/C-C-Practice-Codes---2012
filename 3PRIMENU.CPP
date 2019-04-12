#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    int i,j,flag,a,b;

    printf("Enter The Range In which You Want To Find All Prime numbers:");
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;++i)
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
    printf("%d is a prime number",i);}

    }
    getch();

    }


