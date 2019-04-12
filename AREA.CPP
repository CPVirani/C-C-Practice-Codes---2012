#include<iostream.h>
#include<conio.h>

class shape
{
     public:
     virtual void read()=0;
     virtual void show()=0;

     };

     class circle:public shape
     {
     private:
     float r;

     public:
     void read()
     {
     cout<<"Enter Radius:"<<"\n";
     cin>>r;
     }

     void show()
     {
     cout<<"Area Of Circle="<<3.14*r*r<<"\n"<<endl;
     }

     };

     class rectangle:public shape
     {

     private:
     float l,b;

     public:
     void read()
     {
     cout<<"Enter Length Of Rectangle:"<<"\n";
     cin>>l;
     cout<<"Enter Breadth Of Rectangle:"<<"\n";
     cin>>b;
     }

     void show()
     {
     cout<<"Area Of Rectangle="<<l*b<<"\n"<<endl;
     }

     };

     class triangle:public shape
     {
     private:
     float b,h;

     public:
     void read()
     {
     cout<<"Enter Base Of Triangle:"<<"\n";
     cin>>b;
     cout<<"Enter height of triangle:"<<"\n";
     cin>>h;
     }

     void show()
     {
     cout<<"Enter Area Of Triangle="<<b*h*0.5<<"\n"<<endl;
     }

     };

     void main()
     {

     shape *s[10];
     int count=0,i,choice,menu();
     choice=menu();
     while(choice!=4)
     {
      switch(choice)
      {
      case 1:
      s[count]=new circle;
      s[count]->read();
      count++;
      break;

      case 2:
      s[count]=new rectangle;
      s[count]->read();
      count++;
      break;

      case 3:
      s[count]=new triangle;
      s[count]->read();
      count++;
      break;

      default:
      cout<<"Invalid Choice"<<"\n";
      }

      choice=menu();
      }

      for(i=0;i<count;++i)
      {
      s[i]->show();
      }
      getch();

      }


      int menu()
      {
      int ch;
      clrscr();
      cout<<"1:Circle" <<"\n"<<"2:Rectangle"<<"\n"<<"3:Triangle"<<"\n"<<"4:Exit"<<"\n"<<"Enter Your Choice:"<<"\n";
      cin>>ch;
      return ch;

      }