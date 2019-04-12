 #include<iostream.h>
 #include<conio.h>

 class income_tax
 {

    long int income,income1,income2,income3,income4,totaltax,educationtax;
     char g,m,f;

     public:
     void getincome();
     void gender();
     void income01();
     void income02();
     void income03();
     void income04();
     void totaltax01();
     void educationtax02();
     };

     void income_tax::getincome()
     {

     cout<<"Please Enter Your Income"<<"\n";
     cin>>income;
     cout<<"\n";

     }

     void income_tax::gender()
     {
     cout<<"Please Enter Your Gender(m or f)"<<"\n";
     cin>>g;
     cout<<"\n";
     }

     void income_tax::income01()
     {
     if(g==f)
     {
      income1=(150000-125000)*0.05;
      cout<<"Income Tax Upto Rs.1,50,000="<<income1<<"\n";
      }

      if(g==m)
      {
      income1=(150000-100000)*0.05;
      cout<<"Income Tax Upto Rs.1,50,000="<<income1<<"\n";
      }

     }

     void income_tax::income02()
     {

     income2=(200000-150000)*0.08;
     cout<<"Income tax From Rs.1,50,000 to Rs.2,00,000="<<income2<<"\n";
     }

     void income_tax::income03()
     {
     income3=(300000-200000)*0.08;
     cout<<"Income Tax From Rs.2,00,000 to Rs.3,00,000="<<income3<<"\n";
     }

     void income_tax::income04()
     {
     income4=(10000000-300000)*0.1;
     cout<<"Income Tax From Rs.3,00,000 to Rs.10,00,000="<<income4<<"\n";
     }

     void income_tax::educationtax02()
     {
     educationtax=income*0.2;
     cout<<"Education Tax="<<educationtax<<"\n";
     }


     void income_tax::totaltax01()
     {
     totaltax=income1+income2+income3+income4+educationtax;
     cout<<"Your Total Tax Is="<<totaltax<<"\n";
     }


     void main()
     {
     clrscr();
     long int income,income1,income2,income3,income4,educationtax,incometax,totaltax;
     char g,f,m;

     income_tax i1;

     i1.getincome();
     i1.gender();
     
     if(g==f)
     {
     if(income<=125000)
     {cout<<"No Income Tax levied"<<"\n";}
      }

     if(g==m)
     {
     if(income<=100000)
     {cout<<"No Income Tax Levied"<<"\n";}
     }


     if(income>100000&&income<=150000)
     {
     incometax=(150000-income)*0.02;
     cout<<"Your Income Tax ="<<incometax<<"\n";
     }

    if(income>150000)
     {
     i1.income01();
     }

     if(income>150000&&income<200000)
       {
       incometax=income1+((200000-income)*0.08);
       cout<<"Your Income Tax="<<incometax<<"\n";
       }

       if(income>150000&&income>=200000)
	   {i1.income01();
	    i1.income02();
	   }
    
       if(income>20000&&income<300000)
      {
      incometax=income1+income2+((300000-income)*0.08);
      cout<<"Your Income Tax="<<incometax<<"\n"; 
       }

       if(income>200000&&income>300000)
	  {i1.income01();
                        i1.income02();
	    i1.income03();
	    }

     if(income>300000&&income<1000000)
     {
     incometax=income1+income2+income3+((1000000-income)*0.1);
     cout<<"Your Income Tax Is="<<incometax<<"\n";
     }


     if(income>300000)
     {i1.income01();
       i1.income02();
       i1.income03();
     i1.income04();
     }



       i1.totaltax01();

    cout<<"Have A Good Day"<<"\n";
    getch();
	   }
    }


















