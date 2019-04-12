#include<iostream.h>
#include<conio.h>

void main()
{

     clrscr();
     int a,b,c,d,e,f,g,h;

     cout<<"Enter First Data (any 2 numbers) For Comparison:"<<"\n";
     cin>>a>>b;

     if(a>b&&a>10)
     cout<<a<<">"<<b<<"and"<<a<<">10"<<"\n";

     else if(a>b&&a<10)
     cout<<a<<">"<<b<<"but"<<a<<"<10"<<"\n";

     else if(b>a&&b>10)
     cout<<b<<">"<<a<<"and"<<b<<">10"<<"\n";

     else if(b>a&&b<10)
     cout<<b<<">"<<a<<"but"<<b<<"<10"<<"\n";

     c=a>b ? a>b:b<a;

     e=a<10 ? a<10:a>10;

     d=b<10 ? b<10:b>10;

     g=(a!=b) ? a:b;

     h=a+b;
     if(h>a||h>b)
     cout<<h<<"="<<a+b<<"&"<<h<<">("<<a<<"&"<<b<<")"<<"\n";

     f=(h+a,b);
     cout<<"The Answer is"<<h<<"\n";

     getch();

     }