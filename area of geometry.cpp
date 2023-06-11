using namespace std;
#include <iostream>
main()
{
	string shape;
	float a,b,c;
	cout<<"inter any shape name(triangle,rectangle,squre)  :";
	cin>>shape;
	if(shape=="triangle")
	{
		cout<<"inter hight of triangle :";
		cin>>a;
		cout<<"inter base of triangle :";
		cin>>b;
		c=(a*b)/2;
		cout<<"area of triangle :";
		cout<<c;
		
		
	}
	if(shape=="rectangle")
	{
		cout<<"inter length of rectangle :";
		cin>>a;
		cout<<"inter base of rectangle :";
		cin>>b;
		c=(a*b);
		cout<<"area of rectangle :";
		cout<<c;
	}
	if(shape=="squre")
	{
		cout<<"inter side of squre :";
		cin>>a;
		c=(a*a);
		cout<<"area of squre :";
		cout<<c;
		
}   }
