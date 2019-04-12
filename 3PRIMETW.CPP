#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    int n1,n2,i,j,twin1=0,twin2,flag;

    printf("Enter Range (n1 and n2:n1<n2)=>");
    scanf("%d%d",&n1,&n2);
    printf("\n");

    for(i=n1;i<=n2;++i)
     {
       flag=0;
       for(j=2;j<i/2;++j)
       {
	 if(i%j==0)
	 {
	   flag=1;
	   break;
	   }
	}

	if(flag==0)
	{
	   twin2=i;
	   if(twin2-twin1==2)
	   {
	     printf("%d\t%d\n",twin1,twin2);
	     }

	     twin1=twin2;
	     }
	   }

	   getch();
	}