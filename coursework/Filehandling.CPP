#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void spaces()
{
int n=0;
char ch;
ifstream f1("samples.txt");
while(!f1.eof())
{
f1.get(ch);
if(ch==' ')
n++;
}
cout<<"The number of spaces is "<<n<<endl;
f1.close();
}

void words()
{
int n=0;
char ch1[80];
ifstream f2("samples.txt");
while(!f2.eof())
{
f2>>ch1;
n++;
}
cout<<"The number of words is "<<n<<endl;
f2.close();
}

void lines()
{
int n=0;
char ch1[80];
ifstream f3("samples.txt");
while(!f3.eof())
{
f3.getline(ch1,80,'\n');
n++;
}
cout<<"The number of lines is "<<n<<endl;
f3.close();
}
void display()
{
char ch;
ifstream f4("samples.txt");
while(!f4.eof())
{
f4.get(ch);
cout<<ch;
f4.close();
}
void main()
{
int x;
char ch;
do
{
clrscr();
cout<<"\n The given file sample.txt has the following content in it "<<endl;
display();
cout<<"\n 1. Count the number of spaces ";
cout<<"\n 2. Count the number of words ";
cout<<"\n 3. Count the number of lines ";
cin>>x;
switch(x)
{
case 1:
spaces();
break;
case 2:
words();
break;
case 3:
lines();
break;
}
cout<<"\n Do you want to continue?"<<endl;
cin>>ch;
getch();
}while(ch=='y'||ch=='Y')
}