#include<stdio.h>
#include<conio.h>

void main()
{

     clrscr();
     int r,x,y;

     printf("Enter Radius:");
     scanf("%d",&r);

     for(x=-r;x<=r;++x)
     {

       for(y=-r;y<=r;++y)

       {
	 if((x*x+y*y)<(r*r))
	 {
	 printf("(%d,%d)/n",x,y);
	 }
	 }
	 }
	 getch();
	 }