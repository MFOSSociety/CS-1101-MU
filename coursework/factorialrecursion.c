#include<iostream.h>
int factorial(int n)
{
	if(n>1)
		return n*factorial(n-1);
	else
		return 1;
}
void main()
{
	int n;
	cout<<"Enter a positive integer:";
	cin>>n;
	cout<<"Factorial of"<<n<<"="<<factorial(n);
	return o;
}
	