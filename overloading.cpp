using namespace std;
#include<iostream>
void sum(int a,int b)
{
	cout<<"sum of a and b : ";
	cout<<a+b;
	
}
void sum(int a,int b,int c)
{
	cout<<endl<<"sum of a,b and c : ";
	cout<<a+b+c;
	
}
void sum(double a,int b)
{
	cout<<endl<<"sum of a and b : ";
	cout<<a+b;
	
}

main()
{
	sum(100,300);
	sum(100,200,300);
	sum(112.5,200);
}

