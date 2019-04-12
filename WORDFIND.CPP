 #include<stdio.h>
 #include<conio.h>

 void main()
 {
      clrscr();
      char s1[60],s2[20];
      int length1=0,length2=0,i,j,found;

      printf("Enter Your String:");
      gets(s1);

      while(s1[length1]!='\0')
      length1++;

      printf("Enter The Word  To Find:");
      gets(s2);

      while(s2[length2]!='\0')
      length2++;

      for(i=0;i<length1;++i)
      {
	 found=1;
	 for(j=0;j<length2;++j)
	 {if(s1[i+j]!=s2[j])
	   {found=0;break;}
	 }

	 if(found==1)
	 {printf("String Found!");
	 break;
	 }

	 }

	 if(found==0)
	 {printf("String Not Found!");}

	 getch();
	 }