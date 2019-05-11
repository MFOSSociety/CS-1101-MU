#include<iostream.h>
# include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
 void replace (char s [])
{
for (int i=0; s[i]!='\0'; i++)
if(s[i]==' ')
s[i]='@';
cout<<"new string is "<<s;
}
void pr(char s [])
{
int b=0;
for (int i=0; s[i]!='\0'; i++)
{
if(s[i]==' ')
b=b+1;
}
cout<<"number of words is"<<b+1;
}
void pa (char s [])
{
char o [500]; strcpy (o, s);
if (strcmp(o,strrev(s))==0)
cout<<"the string is a palindrome";
else
cout<<"the string is not a palindrome";
}
void main ()
{
clrscr(); 
int x;
char sl [500], c;
cout<<"enter the string ";
gets(sl);
do
{
cout<<"press 1 to replace all the spaces with @"<<endl;
cout<<"press 2 to print the words present in the string"<<endl;
cout<<"press 3 to check for palindrome"<<endl;
cin>>x;
if(x==1)
replace(sl);
else if(x==2)
pr(sl);
else if(x==3)
pa(sl);
cout<<" do you want to continue "<<endl; cin>>c;
}
while((c=='y') || (c=='Y'));
getch ();
}
