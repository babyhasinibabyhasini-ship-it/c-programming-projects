#include <stdio.h>
#include <stdlib.h>
 struct student
 {
  char name[20];
  int roll;
  int mark;
  char city [20];
  char dream[20];
 };
void readstudent(struct student s[],int n)
{
 int i;

 for(i=0;i<n;i++)
 {
 printf("enter the name:");
 scanf ("%s",s[i].name);
 printf("enter the roll no:");
 scanf ("%d",&s[i].roll);
 printf("enter the mark:");
 scanf ("%d",&s[i].mark);
 printf("enter the city:");
 scanf ("%s",s[i].city);
 printf("enter your dream:");
 scanf ("%s",s[i].dream);
 }
}

void writestudent(struct student s[],int n)
{
 int i;

 printf("--------------STUDENT DETAILS------------");

 for(i=0;i<n;i++)
  {
  printf("ENTER THE NAME:%s\n",s[i].name);
  printf("ENTER THE ROLL NO:%d\n",s[i].roll);
  printf("ENTER THE MARK:%d\n",s[i].mark);
  printf("ENTER THE CITY:%s\n",s[i].city);
  printf("ENTER YOUR DREAM:%s\n",s[i].dream);
  }
}
void main()
{
 int n;
 struct student s[100];
 clrscr();
 printf ("enter the number of student");
 scanf ("%d",&n);
 readstudent(s,n);
 writestudent(s,n);
}
