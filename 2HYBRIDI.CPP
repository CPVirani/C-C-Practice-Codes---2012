#include<iostream.h>
#include<conio.h>

class rice_unclean
{
     protected:
     int cost1;

     public:
     void get_cost(int a)
     {
     cost1=a;
     }
     void put_cost()
     {
     cout<<"Cost Of Unclean rice:"<<cost1<<"\n";
     }

     };

     class rice_clean
     {

     protected:
     int cost2;

     public:
     void get_price(int b)
     {
     cost2=b;
     }

     void put_price()
     {
     cout<<"Price Of Clean Rice:"<<cost2<<"\n";
     }

     };

     class rice_total:public rice_clean, public rice_unclean
     {
     protected:
     float total;

     public:
     void display1()
     {
     cout<<"Total Price Of Both Clean And Unclean Rice="<<cost1+cost2<<"\n";
     }

     };

     class wheat
     {
     protected:
     int cost3;

     public:
     void amount(float w)
     {
     cost3=w;
     }

     void get_amount()
     {
     cout<<"Cost Of Wheat:"<<cost3<<"\n";
     }

     };

     class total: public rice_total, public wheat
     {
     float total_cost;

     public:

     void display();
     };

     void total::display()
     {
     total=cost1+cost2+cost3;

     put_cost();
     put_price();
     display1();
     get_amount();

     cout<<"Total Price:"<<total<<"\n";
     }

     void main()
     {
     clrscr();
     total sellprice1;
     sellprice1.get_cost(32);
     sellprice1.get_price(60);
     sellprice1.amount(45);
     sellprice1.display();

     getch();
     }