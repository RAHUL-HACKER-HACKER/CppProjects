#include<iostream>
using namespace std;
// function calling with out parameter passing & with return value
// reverse of a number
int reverse(int a)
{
	int x=0,n;
	do
	{
		n=a; 
		n=n%10; 
		x=x*10+n; 
		a=a/10; 

	}
	while(a>0); 
	return x; 
}
main()
{
	int v,r;
	cout<<"Enter a Value :";
	cin>>v;
	r=reverse(v);
	cout<<endl<<"Reverse of number "<<v<<" is : "<<r;
}
