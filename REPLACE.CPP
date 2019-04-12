#include<stdio.h>
#include<conio.h>

void main()
{
     clrscr();
     char s[80],replace[20],new_word[20],store[40];
     int length1=0,length2=0,length3=0,i,j,k,found;

     printf("Enter The String:\n");
     gets(s);
     while(s[length1]!='\0')
     length1++;

     printf("Enter The Word To Be Replaced:\n");
     gets(replace);
     while(replace[length2]!='\0')
     length2++;

     printf("Enter The New Word:\n");
     gets(new_word);
     while(new_word[length3]!='\0')
     length3++;

     for(i=0;i<length1;++i)
     {  found=1;
	store[i]=s[i];
	for(j=0;j<length2;++j)
	  {
	  if(s[i+j]!=replace[j])
	  {found=0;
	  break;
	  }

	}

	if(found==1)
	{
	printf("String Found!");
	printf("\n");
	for(k=0;k<length3;++k)
	{store[i+k]=new_word[k];}
	k=i+length3;

	for(j=i+length2;j<length1;++j,k++)
	{
	store[k]=s[j];}
	store[k]='\0';
	printf("\n%s",store);
	break;
	}

	}

	if(found==0)
	{
	printf("Word to be replaced not found");
	}
	getch();
	}
